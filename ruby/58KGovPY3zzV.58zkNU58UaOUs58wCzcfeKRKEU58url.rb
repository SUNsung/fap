
        
              keys = Spaceship::Portal::Key.all
      expect(keys.size).to eq(2)
      expect(keys.sample).to be_instance_of(Spaceship::Portal::Key)
    end
  end
    
        def groups=(groups)
      @groups = groups ? groups.compact : nil
    end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
            expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
          context('when the tag doesn't exist') do
        before do
          allow(Fastlane::Actions).to receive(:sh).with('git rev-parse -q --verify refs/tags/1.2.0 || true', { log: nil }).and_return('')
        end
    
          it 'raises an exception when use passes workspace' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_build_number(xcodeproj: 'project.xcworkspace')
          end').runner.execute(:test)
        end.to raise_error('Please pass the path to the project, not the workspace')
      end
    
      def execute
    Gitlab::Metrics.measure(:import_export_clean_up) do
      return unless File.directory?(path)
    
          def save_request_parameters
        session[:client_id] = @o_auth_application.client_id
        session[:response_type] = @response_type
        session[:redirect_uri] = @redirect_uri
        session[:scopes] = scopes_as_space_seperated_values
        session[:state] = params[:state]
        session[:nonce] = params[:nonce]
      end
    
          out =
        Sass::Util.silence_sass_warnings do
          if @options[:from] == :css
            require 'sass/css'
            Sass::CSS.new(read(input), @options[:for_tree]).render(@options[:to])
          else
            if input_path
              Sass::Engine.for_file(input_path, @options[:for_engine])
            else
              Sass::Engine.new(read(input), @options[:for_engine])
            end.to_tree.send('to_#{@options[:to]}', @options[:for_tree])
          end
        end
    
          had_error = false
      Sass::Plugin.on_creating_directory {|dirname| puts_action :directory, :green, dirname}
      Sass::Plugin.on_deleting_css {|filename| puts_action :delete, :yellow, filename}
      Sass::Plugin.on_deleting_sourcemap {|filename| puts_action :delete, :yellow, filename}
      Sass::Plugin.on_compilation_error do |error, _, _|
        if error.is_a?(SystemCallError) && !@options[:stop_on_error]
          had_error = true
          puts_action :error, :red, error.message
          STDOUT.flush
          next
        end
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
          def initialize(*)
        super
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
        SPREE_GEMS.each do |gem_name|
      Dir.chdir(gem_name) do
        sh 'gem build spree_#{gem_name}.gemspec'
        mv 'spree_#{gem_name}-#{version}.gem', pkgdir
      end
    end