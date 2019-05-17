
        
            it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
        it 'shows all options for agents that can be scheduled, create and receive events' do
      select_agent_type('Website Agent scrapes')
      expect(page).not_to have_content('This type of Agent cannot create events.')
    end
    
        it 'returns a correct icon tag for other services' do
      icon = omniauth_provider_icon(:'37signals')
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-lock')
      expect(elem).to be_a Nokogiri::XML::Element
    end
  end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
      describe 'down' do
    let :valid_options do
      super().merge('extract' => new_extract,
                    'template' => new_template)
    end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        [stdout, stderr, status]
  end
    
            @response = (gets || '').chomp
      end
    
    http://capistranorb.com/documentation/advanced-features/custom-scm
    
          def each
        servers_by_key.values.each { |server| yield server }
      end
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
        def pane_index
      index + tab.project.pane_base_index
    end
    
    # Custom Matchers
require_relative 'matchers/pane_matcher'
    
          def find_project_file(name, local = false)
        path = config_path(name, local)
        if File.exist?(path)
          path
        else
          generate_project_file(name, path)
        end
      end
    
        Make sure that you've set these variables in your ENV: