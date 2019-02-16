
        
          def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        context 'on a post you do not partecipate to' do
      it 'says it is an unprocessable request' do
        delete :destroy, params: {post_id: post.id}
        expect(response.code).to eq('422')
      end
    end
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
    
    Then(/^the release is created$/) do
  run_vagrant_command('ls -g #{TestApp.releases_path}')
end
    
            filter = Object.new
        def filter.filter(servers)
          block.call(servers)
        end
      elsif !filter.respond_to? :filter
        raise TypeError, 'Provided custom filter <#{filter.inspect}> does ' \
                         'not have a public 'filter' method'
      end
      @custom_filters ||= []
      @custom_filters << filter
    end
    
    task :add_template, [:name] do |t, args|
  Dir.glob('README.*') do |file|
    code = File.read(file)
    if code =~ /^===.*#{args.name.capitalize}/
      puts 'Already covered in #{file}'
    else
      template = code[/===[^\n]*Liquid.*index\.liquid<\/tt>[^\n]*/m]
      if !template
        puts 'Liquid not found in #{file}'
      else
        puts 'Adding section to #{file}'
        template = template.gsub(/Liquid/, args.name.capitalize).gsub(/liquid/, args.name.downcase)
        code.gsub! /^(\s*===.*CoffeeScript)/, '\n' << template << '\n\\1'
        File.open(file, 'w') { |f| f << code }
      end
    end
  end
end
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end
