
        
                  relation.update_all(update)
        end
      end
    end
  end
end

    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
          expect(agent.control_targets).to eq([bob_weather_agent])
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
              expect(scenario_import.scenario.name).to eq(name)
          expect(scenario_import.scenario.description).to eq(description)
          expect(scenario_import.scenario.guid).to eq(guid)
          expect(scenario_import.scenario.tag_fg_color).to eq(tag_fg_color)
          expect(scenario_import.scenario.tag_bg_color).to eq(tag_bg_color)
          expect(scenario_import.scenario.icon).to eq(icon)
          expect(scenario_import.scenario.source_url).to eq(source_url)
          expect(scenario_import.scenario.public).to be_falsey
        end
    
          it 'loads only the workers specified in the :only option' do
        agent_runner = AgentRunner.new(only: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['HuginnScheduler'])
        agent_runner.stop
      end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
      gem 'cocoapods-dependencies', '~> 1.0.beta.1'
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
    <style type='text/css' media='screen'>
  *                   {margin: 0; padding: 0; border: 0; outline: 0;}
  div.clear           {clear: both;}
  body                {background: #EEEEEE; margin: 0; padding: 0;
                       font-family: 'Lucida Grande', 'Lucida Sans Unicode',
                       'Garuda';}
  code                {font-family: 'Lucida Console', monospace;
                       font-size: 12px;}
  li                  {height: 18px;}
  ul                  {list-style: none; margin: 0; padding: 0;}
  ol:hover            {cursor: pointer;}
  ol li               {white-space: pre;}
  #explanation        {font-size: 12px; color: #666666;
                       margin: 20px 0 0 100px;}
/* WRAP */
  #wrap               {width: 1000px; background: #FFFFFF; margin: 0 auto;
                       padding: 30px 50px 20px 50px;
                       border-left: 1px solid #DDDDDD;
                       border-right: 1px solid #DDDDDD;}
/* HEADER */
  #header             {margin: 0 auto 25px auto;}
  #header img         {float: left;}
  #header #summary    {float: left; margin: 12px 0 0 20px; width:660px;
                       font-family: 'Lucida Grande', 'Lucida Sans Unicode';}
  h1                  {margin: 0; font-size: 36px; color: #981919;}
  h2                  {margin: 0; font-size: 22px; color: #333333;}
  #header ul          {margin: 0; font-size: 12px; color: #666666;}
  #header ul li strong{color: #444444;}
  #header ul li       {display: inline; padding: 0 10px;}
  #header ul li.first {padding-left: 0;}
  #header ul li.last  {border: 0; padding-right: 0;}
/* BODY */
  #backtrace,
  #get,
  #post,
  #cookies,
  #rack               {width: 980px; margin: 0 auto 10px auto;}
  p#nav               {float: right; font-size: 14px;}
/* BACKTRACE */
  a#expando           {float: left; padding-left: 5px; color: #666666;
                      font-size: 14px; text-decoration: none; cursor: pointer;}
  a#expando:hover     {text-decoration: underline;}
  h3                  {float: left; width: 100px; margin-bottom: 10px;
                       color: #981919; font-size: 14px; font-weight: bold;}
  #nav a              {color: #666666; text-decoration: none; padding: 0 5px;}
  #backtrace li.frame-info {background: #f7f7f7; padding-left: 10px;
                           font-size: 12px; color: #333333;}
  #backtrace ul       {list-style-position: outside; border: 1px solid #E9E9E9;
                       border-bottom: 0;}
  #backtrace ol       {width: 920px; margin-left: 50px;
                       font: 10px 'Lucida Console', monospace; color: #666666;}
  #backtrace ol li    {border: 0; border-left: 1px solid #E9E9E9;
                       padding: 2px 0;}
  #backtrace ol code  {font-size: 10px; color: #555555; padding-left: 5px;}
  #backtrace-ul li    {border-bottom: 1px solid #E9E9E9; height: auto;
                       padding: 3px 0;}
  #backtrace-ul .code {padding: 6px 0 4px 0;}
  #backtrace.condensed .system,
  #backtrace.condensed .framework {display:none;}
/* REQUEST DATA */
  p.no-data           {padding-top: 2px; font-size: 12px; color: #666666;}
  table.req           {width: 980px; text-align: left; font-size: 12px;
                       color: #666666; padding: 0; border-spacing: 0;
                       border: 1px solid #EEEEEE; border-bottom: 0;
                       border-left: 0;
                       clear:both}
  table.req tr th     {padding: 2px 10px; font-weight: bold;
                       background: #F7F7F7; border-bottom: 1px solid #EEEEEE;
                       border-left: 1px solid #EEEEEE;}
  table.req tr td     {padding: 2px 20px 2px 10px;
                       border-bottom: 1px solid #EEEEEE;
                       border-left: 1px solid #EEEEEE;}
/* HIDE PRE/POST CODE AT START */
  .pre-context,
  .post-context       {display: none;}
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end