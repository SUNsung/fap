
        
        # Mimic how Jekyll's LiquidRenderer would process a non-static file, with
# some dummy payload
def always_liquid(content)
  Liquid::Template.error_mode = :warn
  Liquid::Template.parse(content, :line_numbers => true).render(
    'author' => 'John Doe',
    'title'  => 'FooBar'
  )
end
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
          click_on 'Save'
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        before do
      stub(Agents::DotFoo).valid_type?('Agents::DotFoo') { true }
      stub(Agents::DotBar).valid_type?('Agents::DotBar') { true }
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
          Utils.sort_tuples!(tuples)
      expect(tuples).to eq expected
    end
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          # rubocop:disable Style/GuardClause
      def register_legacy_scm_hooks
        if Rake::Task.task_defined?('deploy:new_release_path')
          after 'deploy:new_release_path', '#{scm_name}:create_release'
        end
    
            true
      end
    
          ServerKey = Struct.new(:hostname, :port)
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
      s.add_dependency 'bootstrap',       '~> 4.1.3'
  s.add_dependency 'glyphicons',      '~> 1.0.2'
  s.add_dependency 'jquery-rails',    '~> 4.3'
  s.add_dependency 'jquery-ui-rails', '~> 6.0.1'
  s.add_dependency 'select2-rails',   '3.5.9.1' # 3.5.9.2 breaks several specs
end
