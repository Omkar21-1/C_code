
create table Movie(
	m_id int primary key,
	m_name varchar(25) Not null unique,
	release_year int Not null,
	budget money Not null
);


create table Actor(
	a_id int primary key,
	a_name varchar(30) Not null,
	role varchar(30) not null,
	charges money Not null,
	a_address varchar(30) not null	
);

create table Movie_Actor(
	m_id int references Movie(m_id) ON Delete Cascade ON Update Cascade,
	a_id int references Actor(a_id) ON Delete Cascade ON Update Cascade,
	primary key (m_id, a_id)
);








--record source ChatGPT
-- Inserting records into the Movie table
insert into Movie (m_id, m_name, release_year, budget) values
(1, 'Sairat', 2016, 40000000),
(2, 'Natsamrat', 2016, 15000000),
(3, 'Fandry', 2013, 20000000),
(4, 'Lai Bhaari', 2014, 80000000),
(5, 'Katyar Kaljat Ghusali', 2015, 50000000);

-- Inserting records into the Actor table
insert into Actor (a_id, a_name, role, charges, a_address) values
(1, 'Rinku Rajguru', 'Archana (Archi)', 500000, 'Akluj, Maharashtra'),
(2, 'Akash Thosar', 'Prashant (Parshya)', 450000, 'Karmala, Maharashtra'),
(3, 'Nana Patekar', 'Ganpatrao Belwalkar', 1500000, 'Mumbai, Maharashtra'),
(4, 'Sachin Khedekar', 'Sharangdhar Pant', 1000000, 'Mumbai, Maharashtra'),
(5, 'Riteish Deshmukh', 'Mauli', 2000000, 'Latur, Maharashtra');

-- Inserting records into the Movie_Actor table
insert into Movie_Actor (m_id, a_id) values
(1, 1),  -- Rinku Rajguru in Sairat
(1, 2),  -- Akash Thosar in Sairat
(2, 3),  -- Nana Patekar in Natsamrat
(5, 4),  -- Sachin Khedekar in Katyar Kaljat Ghusali
(4, 5);  -- Riteish Deshmukh in Lai Bhaari





--Select

select * 
from Movie,Actor,Movie_Actor 
where 
	Movie.m_id = Movie_Actor.m_id
AND Actor.a_id = Movie_Actor.a_id;







--Q1) write a function which will accept movie name and prints its release year and budget

Create or Replace Function get_release_year_and_budget(temp_move_name Movie.m_name%TYPE)
Returns varchar AS'
Declare 
	temp_release_year Movie.release_year%TYPE;
	temp_budget Movie.budget%TYPE;
BEGIN
	select release_year, budget INTO temp_release_year, temp_budget
	from Movie 
	where m_name = temp_move_name;

	IF NOT FOUND then
		return ''No Record Found For Given Movie Name '' || temp_move_name;
	end IF;

	return ''Movie Name : '' || temp_release_year || '' | Budget : '' ||  temp_budget;

END;
	'Language 'plpgsql';
