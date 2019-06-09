
        
          it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
      it 'should propagate events' do
    mock(Agent).receive!
    stub.instance_of(IO).puts
    @scheduler.send(:propagate!)
  end
    
        it 'should raise error when response says unauthorized' do
      stub(HTTParty).post { {'Response' => 'Not authorized'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Not authorized/)
    end
    
      Inspector.def_inspector([false, :to_s, :raw]){|v| v.to_s}
  Inspector.def_inspector([true, :p, :inspect]){|v|
    begin
      result = v.inspect
      if IRB.conf[:MAIN_CONTEXT]&.use_colorize? && Color.inspect_colorable?(v)
        result = Color.colorize_code(result)
      end
      result
    rescue NoMethodError
      puts '(Object doesn't support #inspect)'
    end
  }
  Inspector.def_inspector([:pp, :pretty_inspect], proc{require 'pp'}){|v|
    result = v.pretty_inspect.chomp
    if IRB.conf[:MAIN_CONTEXT]&.use_colorize? && Color.inspect_colorable?(v)
      result = Color.colorize_code(result)
    end
    result
  }
  Inspector.def_inspector([:yaml, :YAML], proc{require 'yaml'}){|v|
    begin
      YAML.dump(v)
    rescue
      puts '(can't dump yaml. use inspect)'
      v.inspect
    end
  }
    
      # This method is called when strong warning is produced by the parser.
  # +fmt+ and +args+ is printf style.
  def warning(fmt, *args)
  end
    
      if n.x < 0.6 and n.x > -0.6 then
    basis[1].x = 1.0
  elsif n.y < 0.6 and n.y > -0.6 then
    basis[1].y = 1.0
  elsif n.z < 0.6 and n.z > -0.6 then
    basis[1].z = 1.0
  else
    basis[1].x = 1.0
  end
    
    answer = to_array(solution).map do |p|
  to_string(p)
end
    
      puts '* [Sinatra](#sinatra)'
  title = Regexp.new('(?<=\* )(.*)') # so Ruby 1.8 doesn't complain
  File.binread(a.readme).scan(/^##.*/) do |line|
    puts line.gsub(/#(?=#)/, '    ').gsub('#', '*').gsub(title) { '[#{$1}](##{link($1)})' }
  end
end
    
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
    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
          def call(env)
        unless accepts? env
          instrument env
          result = react env
        end
        result or app.call(env)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
            reaction
      end
    
      # Configure public file server for tests with Cache-Control for performance.
  config.public_file_server.enabled = true
  config.public_file_server.headers = {
    'Cache-Control' => 'public, max-age=#{1.hour.to_i}'
  }
    
        Find.find(installdir) do |path|
      match_path = path.sub('#{installdir.chomp('/')}/', '')
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
        def name
      project.name
    end
    
      context 'hook value is Array' do
    before do
      project.yaml[hook_name] = [
        'echo 'on hook'',
        'echo 'another command here''
      ]
    end
    
      subject { instance }
    
      if pane_base_index = options.fetch(:pane_base_index) { 1 }
    standard_options << 'pane-base-index #{pane_base_index}'
  end
    
          it 'returns true' do
        expect(described_class.installed?).to be_truthy
      end
    end
    
            expect(window.panes).to match(
          [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands('ls'),
            a_pane.with(index: 2).and_commands('top')
          ]
        )
      end
    end
    
              if yes?('Are you sure you want to delete #{project}?(y/n)', :red)
            FileUtils.rm(config)
            say 'Deleted #{project}'
          end
        else
          say '#{project} does not exist!'
        end
      end
    end