
        
            def register_lotus
      Lotus::Assets.sources << assets_path
    end
    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
        private
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
    desc 'generate gemspec'
task 'rack-protection.gemspec' do
  require 'rack/protection/version'
  content = File.binread 'rack-protection.gemspec'
    
          def unmasked_token?(token)
        token.length == TOKEN_LENGTH
      end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)