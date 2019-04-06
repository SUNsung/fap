
        
        def docs_name
  '#{name}-docs'
end
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            def stop
          # There is only one EventMachine instance per Ruby process so stopping
          # it here will stop the reactor thread we have running.
          EM.stop if EM.reactor_running?
          Jekyll.logger.debug 'LiveReload Server:', 'halted'
        end
    
    describe GivenDailyLike do
    
            css('.example-title + pre').each do |node|
          node['name'] = node.previous_element.content.strip
          node.previous_element.remove
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
          def has_sidebar
        @sidebar = (@page.sidebar || false) if @sidebar.nil? && @page
        !!@sidebar
      end
    
          attr_reader :page, :content
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        @wiki.update_page(@wiki.page('k'), nil, nil, '다른 text', {})
    @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('k')
    assert_equal '다른 text', utf8(page.raw_data)
    
      end
end

    
    desc 'Test the paperclip plugin under all supported Rails versions.'
task :all do |t|
  if ENV['BUNDLE_GEMFILE']
    exec('rake spec && cucumber')
  else
    exec('rm -f gemfiles/*.lock')
    Rake::Task['appraisal:gemfiles'].execute
    Rake::Task['appraisal:install'].execute
    exec('rake appraisal')
  end
end
    
      steps %{
    And I turn off class caching
    And I write to 'Gemfile' with:
      '''
      source 'http://rubygems.org'
      gem 'rails', '#{framework_version}'
      gem 'sqlite3', :platform => [:ruby, :rbx]
      gem 'activerecord-jdbcsqlite3-adapter', :platform => :jruby
      gem 'jruby-openssl', :platform => :jruby
      gem 'capybara'
      gem 'gherkin'
      gem 'aws-sdk-s3'
      gem 'racc', :platform => :rbx
      gem 'rubysl', :platform => :rbx
      '''
    And I remove turbolinks
    And I comment out lines that contain 'action_mailer' in 'config/environments/*.rb'
    And I empty the application.js file
    And I configure the application to use 'paperclip' from this project
  }
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def register_new_attachment
      Paperclip::AttachmentRegistry.register(@klass, @name, @options)
    end