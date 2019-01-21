
        
        if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
        group.add(moderator)
    group.save
    
    # User for the smoke tests
if ENV['SMOKE'] == '1'
  UserEmail.seed do |ue|
    ue.id = 0
    ue.email = 'smoke_user@discourse.org'
    ue.primary = true
    ue.user_id = 0
  end
    
          it 'Converts a string value for :commits_count' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(commits_count: '10')
        end').runner.execute(:test)
    
          self.default_value
    end
  end
end

    
          ENV[new_initial_revision_var] ||= ENV[old_initial_revision_var]
      ENV[new_current_revision_var] ||= ENV[old_current_revision_var]
    
    task :permissions do
  sh %{chmod -R a+rx bin}
  sh %{chmod -R a+r .}
  require 'shellwords'
  Dir.glob('test/**/*_test.rb') do |file|
    next if file =~ %r{^test/haml/spec/}
    sh %{chmod a+rx #{file}}
  end
end
    
        # variable
    # Script::Value
    inherited_hash_reader :var