<?php    ini_set('max_execution_time', 900);
/**
 * Copyright (c) 2018. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
 * Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
 * Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
 * Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
 * Vestibulum commodo. Ut rhoncus gravida arcu.
 */

$system_keys = json_decode(file_get_contents('config.json'),true);

$key = $system_keys['git']['key'];
$url = $system_keys['git']['url'];
$tree = $system_keys['git']['tree'];

$url_lg = $system_keys['language']['url_lg'];
$languare = $system_keys['language']['seach_lg'];
$name_lg = $system_keys['language']['name_lg'];

$time_to_fap = $system_keys['options']['work_and_magick'];

$file_key = file_get_contents("temp.git");

$size = intval((count($url_lg)+count($languare)+count($name_lg))/3)-1;

$temp_value_lg = mt_rand(0,$size);

$llaplandia = $languare[$temp_value_lg];


print ('{"time-1": "Начало работы: '.date("Y-m-d H:i:s").'","languare":"'.$llaplandia.'","array":');


if($time_to_fap and ($file_key < strtotime(date("Y-m-d H:i:s")))){

    $date_update = strtotime(date("Y-m-d H:i:s")) + 60*(mt_rand(15,75));

    $fd = fopen("temp.git", 'w');
    fwrite($fd, $date_update);
    fclose($fd);


    $url_laplandia = $url . '/repos/SUNsung/fap/contents' .$url_lg[$temp_value_lg].'?ref=master_flomaster&access_token=' . $key;

$code = file_get_contents($url_laplandia, NULL, NULL, 0);

$mass_array_comics = json_decode($code, true);
$size_mass_comics = count($mass_array_comics);


if($size_mass_comics < 666) {

    $index_code  = teylor($size_mass_comics);
    $index = 0;

    $parse_code_arr = parse_git_code($url,$key,$llaplandia,5);      //Парсинг кусков кода. Много боли, костылей и извращения. Оптимизация? Не, не слышал!
    $size_parse_code = count($parse_code_arr);

    $correct_code_arr = [];

    while ($size_parse_code != $index) {

        if(mt_rand(0,3) == 1)  $correct_code_arr[] = $parse_code_arr[$index];

        $index = $index + 1;
    }

    $string_code = t(file_get_contents($mass_array_comics[$index_code]['download_url'].'&access_token='.$key, NULL, NULL, 0));
    $code_string_land  = join('
    
    ',$correct_code_arr);
        

    if($index_code > $size_mass_comics or strlen($string_code) > 698351600) {
                  //создание и запись в новый файл
        $name = unik_key().$name_lg[$temp_value_lg];
        $code_text = $code_string_land;
        $coment_bot = coments();


        $code_arr = ['File: ['.$name.'] create!', create_new_file($url,$url_lg[$temp_value_lg],$name,$code_text,$coment_bot,$key,12)];   //Создание нового файла в директории

    }   else {
                //правка и перезапись уже существующего файла
        $name = $mass_array_comics[$index_code]['name'];
        $code_text = rabbit($string_code).'
        
        '.$code_string_land;
        $coment_bot = coments();
        $sasha =  $mass_array_comics[$index_code]['sha'];

        $code_arr = ['File: ['.$name.']  rewrite!',create_new_file($url,$url_lg[$temp_value_lg],$name,$code_text,$coment_bot,$key,$sasha)];   //Создание нового файла в директории

    }

}


}  else
    $code_arr = ['time' => 'The time has not come yet, my Lord!','time_to_fap' => date("Y-m-d H:i:s", $file_key)];

$string = json_encode($code_arr);

print (htmlspecialchars($string));

print (',"time-2": "Конец работы работы: '.date("Y-m-d H:i:s").'"}');


//системные функции

function began($user_agent,$type,$url,$metod,$post){
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_USERAGENT, $user_agent);
    curl_setopt($ch, CURLOPT_HTTPHEADER, array($type));
    curl_setopt($ch, CURLOPT_CUSTOMREQUEST, $metod);
    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_POSTFIELDS, $post);
    curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 0);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    $temp = curl_exec($ch);
    curl_close($ch);
    return json_decode($temp, true);
}

function t($var)  {
  //  $var = str_replace("'", "&#8242;", $var);
    $var = str_replace('"', "'", $var);
 //   $var = str_replace(")", "&raquo;", $var);
 //   $var = str_replace("/", "&#47;", $var);
  //  $var = str_replace("[", "&#91;", $var);
  //  $var = str_replace("]", "&#93;", $var);
 //   $var = str_replace("{", "&lsaquo;", $var);
 //   $var = str_replace("}", "&rsaquo;", $var);
    return $var;
}

function pasta($string, $int){

    $superstring = '';

    for($i = 0; $i < $int; $i++)    $superstring = $superstring.'
    '.$string;

    return $superstring;
}

function teylor($int){

    if($int > 0 and $int < 25) $key = mt_rand($int,25);
    elseif($int > 25 and $int < 100) $key = mt_rand($int,100);
    elseif($int > 100 and $int < 200) $key = mt_rand($int,200);
    elseif($int > 200 and $int < 300) $key = mt_rand($int,300);
    elseif($int > 300 and $int < 400) $key = mt_rand($int,400);
    elseif($int > 400 and $int < 500) $key = mt_rand($int,500);
    elseif($int > 500 and $int < 600) $key = mt_rand($int,600);
    else $key = mt_rand($int,665);

    $count = mt_rand(0,$key);

        return $count;
}

function parse_git_code($url,$key,$llaplandia,$size_rand){

    $temp_array = [];
    $repo_arr = [];
    $code_arr = [];
//начало парсинга кода с произвольных репозиториев

    $parse = file_get_contents($url.'/search/repositories?q=language:'.$llaplandia.'&sort=stars&order=desc&access_token='.$key, NULL, NULL, 0);

    $temp_array = json_decode($parse, true);

    foreach ($temp_array['items'] as $item)  $repo_arr[] = [$item["id"],$item["name"],$item["full_name"]];

    foreach ($repo_arr as $repoz){

        if(rand(0,$size_rand) == $size_rand) {

            $parse = file_get_contents($url.'/search/code?q=language:'.$llaplandia.'+repo:'.$repoz[2].'&access_token='.$key, NULL, NULL, 0);

            $temp_array = json_decode($parse, true);

            if(count($temp_array) > 2) {

                $raptor = [];
                $tiny = 0;

                for($i = 0; $i < count($temp_array); $i++){
                    $temta = rand(0,count($temp_array));
                    if (!in_array($temta, $raptor))
                        $raptor[] = $temta;
                    else
                        $raptor[] = 777;
                }

                foreach ($temp_array['items'] as $item) { //выгрузка массива файлов с кодом из репозитория

                    if($raptor[$tiny] != 777){

                        $temp = [];
                        $pars = '';
                        $pars = file_get_contents($item['url'] . '&access_token=' . $key, NULL, NULL, 0);
                        $temp = json_decode($pars, true);
                        $code_url = $temp['download_url'];

                        $temp_string = t(file_get_contents($code_url, NULL, NULL, 0));
                        $temp_array = explode("\n\n", $temp_string);
                        $temp_string = '';
                        $size_count = count($temp_array) - 1;

                        if($size_count > 5){
                            $tiny_block = 0;
                            do {
                                $isles = mt_rand(1, $size_count);
                                $temp_string = $temp_array[$isles];
                                $tiny_block = $tiny_block + 1;
                                if($tiny_block > 100) break(1);
                            } while (strlen($temp_string) < 200 or $tiny_block < 100);

                            $evil_code = [substr_count($temp_string, '{'), substr_count($temp_string, '}')];

                            if ($evil_code[0] != $evil_code[1]) {

                                if ($evil_code[0] > $evil_code[1]) $code_string = $temp_string . pasta('}', ($evil_code[0] - $evil_code[1]));
                                if ($evil_code[0] < $evil_code[1]) $code_string = pasta('{', ($evil_code[1] - $evil_code[0])) . $temp_string;

                            } else  $code_string = $temp_string;

                            $code_arr[] = ($code_string);
                        }
                    }
                    $tiny += 1;
                }
            }
        }  }
//конец парсинга кода с произвольных репозиториев

    return $code_arr;
}

function rabbit($string){

    $temp_array = explode("\n\n", $string);
    $temp_array = shuffle($temp_array);
    $string = join('
    
    ', $temp_array);

    return $string;
}

function coments(){
    $array_glagolov = ['нагомнокодил', 'добавил', 'исправил', 'приумножил'];
    $array_begin = ['Я опять', 'Тут я немного', 'Смотри что я'];
    $array_ser = ['так что', 'к сожалению','к счастью', 'очень повезло что'];
    $array_end = ['ничего не работает! =(','можно еще что-то сломать)','все стало гораздо красивее!',' все очень плохо -_-','не о чем переживать!)',' самое время нати Сару Конор.'];

    $string = armstrong($array_begin).' '.armstrong($array_glagolov).', '.armstrong($array_ser).' теперь '.armstrong($array_end);
    
    return $string;
}

function armstrong($array){
    $size = (count($array) - 1);
    $rand = rand(0,$size);

    return $array[$rand];
}

function unik_key(){
    $key = [];
    $string_key = '';

    $arr = str_split(date("sYdaHYm"));
    foreach ($arr as $x) $key[] = crypt($x.'s'.rand(1, 99),$x * rand(1, 99));
    $string_key = join('',$key);

    $arr =  str_split($string_key,rand(7,22));
    $key = [];
    foreach ($arr as $y) $key[] = crypt($y,date("sYdaHYm"));

    $string_key = join('',$key);
    $arr =  str_split($string_key,44);

    return str_replace("/", '', $arr[0]);
}

function create_new_file($url,$name_lg,$name,$text,$msg,$key,$sasha)    {

    $url_laplandia = $url . '/repos/SUNsung/fap/contents' . $name_lg . '/' . $name . '?access_token=' . $key;

    if($sasha == 12) $sasha = sha1($text, false);

    $post = '{
  "message": "'.$msg.'",
  "committer": {
    "name": "SUNsung",
    "email": "weatherius@gmail.com"
  },
  "content": "' . base64_encode($text) . '",
  "branch": "master_flomaster",
  "sha": "' . $sasha . '"
}';


    $code_arr = began('V1 Git-fap bot by Weatherius', 'Content-Type:application/json', $url_laplandia, 'PUT', $post);

    return $code_arr;
}
