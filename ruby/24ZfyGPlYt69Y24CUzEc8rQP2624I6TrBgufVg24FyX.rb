
        
        def jekyll_run_output
  if Paths.output_file.file?
    then return Paths.output_file.read
  end
end
    
                  # Notify blocked threads that EventMachine has started or shutdown
              EM.schedule { @started_event.set }
              EM.add_shutdown_hook { @stopped_event.set }
    
              @highlighter = begin
            if @config.key?('enable_coderay') && @config['enable_coderay']
              Jekyll::Deprecator.deprecation_message(
                'You are using 'enable_coderay', ' \
                'use syntax_highlighter: coderay in your configuration file.'
              )
    
      namespace :install do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build and install #{gem} as local gem'
      task gem => package(gem, '.gem') do
        sh 'gem install #{package(gem, '.gem')}'
      end
    end
    
      task :all => [:readmes, :index]
end
    
            reaction
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end