
        
          def test_localized_template_has_correct_header_with_no_format_in_template_name
    I18n.locale = :it
    get :hello_world
    assert_equal 'Ciao Mondo', @response.body
    assert_equal 'text/html',  @response.media_type
  end
end

    
      def test_render_json
    get :one
    assert_response :success
    assert_equal({ a: 'b' }.to_json, @response.body)
    assert_equal 'application/json', @response.media_type
  end
    
      def test_variant_variant_not_set_and_without_implicit_rendering_from_browser
    assert_raises(ActionController::MissingExactTemplate) do
      get :variant_without_implicit_template_rendering
    end
  end
    
          def with_symbol
        render inline: 'I respond to bare_a: <%= respond_to?(:bare_a) %>'
      end
    end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
        it 'should not provide the since attribute on first run' do
      expect(@checker.send(:query_parameters)).to eq({})
    end
    
    describe Agents::BoxcarAgent do
  before(:each) do
  @valid_params = {
                    'user_credentials' => 'access_token',
                    'title' => 'Sample Title',
                    'body' => 'Sample Body'
                  }
  @checker = Agents::BoxcarAgent.new(:name => 'boxcartest', :options => @valid_params)
  @checker.user = users(:bob)
  @checker.save!
    
        case smb_share.upcase
    when 'ADMIN$'
      path = 'System32\\WindowsPowerShell\\v1.0\\powershell.exe'
    when 'C$'
      path = 'Windows\\System32\\WindowsPowerShell\\v1.0\\powershell.exe'
    else
      path = psh_path
    end
    
      # Check for modules using the DEBUG datastore option
  #
  # @see https://github.com/rapid7/metasploit-framework/issues/3816
  def check_use_datastore_debug
    if @source =~ /datastore\[[''](?i)DEBUG(?-i)['']\]/
      error('Please don\'t use the DEBUG datastore option in production, it has an special meaning and is used for development')
    end
  end
    
        if (opts['uri_full_url'])
      url = opts['ssl'] ? 'https://' : 'http://'
      url << opts['vhost']
      url << ((opts['port'] == 80) ? '' : ':#{opts['port']}')
      url << uri_str
      url
    else
      uri_str
    end
  end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end