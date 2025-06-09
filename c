select open_date from deposit1 where  c_id =(select c_id from customer where c_name='arjun');
select  c_id from deposit1 where open_date>2020-04-09;
select c_id,acc_no from deposit1 where amount between 20000 and 60000;
select c_name from customer where c_name like '%a%';
select c_name from customer where  c_id in(select c_id from deposit1 where c_name like '%a');
