
        
              attr_reader :page, :content
    
    ENV['RACK_ENV'] = 'test'
require 'gollum'
require 'gollum/app'
    
        post '/edit/' + CGI.escape('한글'), :page => 'k', :content => '바뀐 text',
         :format                            => 'markdown', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?