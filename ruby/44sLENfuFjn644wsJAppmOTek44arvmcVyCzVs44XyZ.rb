
        
            def handle_unknown_error!(e)
      # Some spaceship exception classes implement #preferred_error_info in order to share error info
      # that we'd rather display instead of crashing with a stack trace. However, fastlane_core and
      # spaceship can not know about each other's classes! To make this information passing work, we
      # use a bit of Ruby duck-typing to check whether the unknown exception type implements the right
      # method. If so, we'll present any returned error info in the manner of a user_error!
      error_info = e.respond_to?(:preferred_error_info) ? e.preferred_error_info : nil
      should_show_github_issues = e.respond_to?(:show_github_issues) ? e.show_github_issues : true
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
            it 'adds invalid path option' do
          path = './non/existent/path'
          expect do
            Fastlane::FastFile.new.parse('lane :test do
              swiftlint(
                path: '#{path}'
              )
            end').runner.execute(:test)
          end.to raise_error(/Couldn't find path '.*#{path}'/)
        end
      end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelperXcode8.swift')
  warn('You modified `SnapshotHelperXcode8.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
            @user.send_confirmation_instructions
      end
    
        def update
      authorize @custom_emoji, :update?
    
        private
    
        def status_params
      params.require(:status).permit(:sensitive)
    end
    
      before_action :require_user!
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
      class GistTagNoCache < GistTag
    def initialize(tag_name, text, token)
      super
      @cache_disabled = true
    end
  end
end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end