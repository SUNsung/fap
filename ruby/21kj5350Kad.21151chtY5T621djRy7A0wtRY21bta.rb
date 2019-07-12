
        
              def test_clears_up_previous_helpers
        @controller.process(:with_symbol)
        assert_equal 'I respond to bare_a: false', @controller.response_body
      end
    
      def name
    'hash backed author'
  end
end
    
            attr_reader :attributes
    
    describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
          agent = Agent.find_by(name: 'Test Weather Agent')
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      context '#parse_duration' do
    it 'works with correct arguments' do
      expect(Utils.parse_duration('2.days')).to eq(2.days)
      expect(Utils.parse_duration('2.seconds')).to eq(2)
      expect(Utils.parse_duration('2')).to eq(2)
    end
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end