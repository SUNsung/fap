
        
            gu = GroupUser.find_by(user_id: moderator.id, group_id: group.id)
    expect(gu.notification_level).to eq(NotificationLevels.all[:regular])
  end
    
    describe ScenarioImportsController do
  let(:user) { users(:bob) }
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
        @agent1 = Agents::SchedulerAgent.new(name: 'Scheduler 1', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
    @agent2 = Agents::SchedulerAgent.new(name: 'Scheduler 2', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
  end
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_request_forgery
    #
    # This middleware only accepts requests other than <tt>GET</tt>,
    # <tt>HEAD</tt>, <tt>OPTIONS</tt>, <tt>TRACE</tt> if their given access
    # token matches the token included in the session.
    #
    # It checks the <tt>X-CSRF-Token</tt> header and the <tt>POST</tt> form
    # data.
    #
    # Compatible with the {rack-csrf}[https://rubygems.org/gems/rack_csrf] gem.
    #
    # == Options
    #
    # [<tt>:authenticity_param</tt>] the name of the param that should contain
    #                                the token on a request. Default value:
    #                                <tt>'authenticity_token'</tt>
    #
    # == Example: Forms application
    #
    # To show what the AuthenticityToken does, this section includes a sample
    # program which shows two forms. One with, and one without a CSRF token
    # The one without CSRF token field will get a 403 Forbidden response.
    #
    # Install the gem, then run the program:
    #
    #   gem install 'rack-protection'
    #   ruby server.rb
    #
    # Here is <tt>server.rb</tt>:
    #
    #   require 'rack/protection'
    #
    #   app = Rack::Builder.app do
    #     use Rack::Session::Cookie, secret: 'secret'
    #     use Rack::Protection::AuthenticityToken
    #
    #     run -> (env) do
    #       [200, {}, [
    #         <<~EOS
    #           <!DOCTYPE html>
    #           <html lang='en'>
    #           <head>
    #             <meta charset='UTF-8' />
    #             <title>rack-protection minimal example</title>
    #           </head>
    #           <body>
    #             <h1>Without Authenticity Token</h1>
    #             <p>This takes you to <tt>Forbidden</tt></p>
    #             <form action='' method='post'>
    #               <input type='text' name='foo' />
    #               <input type='submit' />
    #             </form>
    #
    #             <h1>With Authenticity Token</h1>
    #             <p>This successfully takes you to back to this form.</p>
    #             <form action='' method='post'>
    #               <input type='hidden' name='authenticity_token' value='#{env['rack.session'][:csrf]}' />
    #               <input type='text' name='foo' />
    #               <input type='submit' />
    #             </form>
    #           </body>
    #           </html>
    #         EOS
    #       ]]
    #     end
    #   end
    #
    #   Rack::Handler::WEBrick.run app
    #
    # == Example: Customize which POST parameter holds the token
    #
    # To customize the authenticity parameter for form data, use the
    # <tt>:authenticity_param</tt> option:
    #   use Rack::Protection::AuthenticityToken, authenticity_param: 'your_token_param_name'
    class AuthenticityToken < Base
      TOKEN_LENGTH = 32
    
          def csp_policy
        directives = []
    
      describe '#random_string' do
    it 'outputs a string of 32 characters' do
      expect(subject.random_string.length).to eq(32)
    end
  end
    
      it 'should allow changing the protection settings' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :default_src => 'none', :script_src => 'https://cdn.mybank.net', :style_src => 'https://cdn.mybank.net', :img_src => 'https://cdn.mybank.net', :connect_src => 'https://api.mybank.com', :frame_src => 'self', :font_src => 'https://cdn.mybank.net', :object_src => 'https://cdn.mybank.net', :media_src => 'https://cdn.mybank.net', :report_uri => '/my_amazing_csp_report_parser', :sandbox => 'allow-scripts'
    
      config.vm.define :smartos do |smartos|
    smartos.vm.box = 'smartos-base1310-64-virtualbox-20130806.box'
    smartos.vm.box_url = 'http://dlc-int.openindiana.org/aszeszo/vagrant/smartos-base1310-64-virtualbox-20130806.box'
  end
    
      def iteration
    return @iteration || 1
  end # def iteration
    
        # name prefixing is optional, if enabled, a name 'foo' will become
    # 'python-foo' (depending on what the python_package_name_prefix is)
    if attributes[:python_fix_name?]
      self.name = fix_name(metadata['name'])
    else
      self.name = metadata['name']
    end
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end