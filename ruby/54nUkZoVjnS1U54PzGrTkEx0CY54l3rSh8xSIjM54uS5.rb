
        
            set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
          NO_ARG_DIRECTIVES = %i(block_all_mixed_content disown_opener
                             upgrade_insecure_requests).freeze
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end