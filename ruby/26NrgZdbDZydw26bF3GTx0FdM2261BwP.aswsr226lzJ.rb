
        
          # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
      # DBM stores ruby objects as a ruby `String`. Hence, when fetching the data,
  # to convert the ruby string back into a ruby `Hash`, the string is converted
  # into a JSON compatible string in `ruby_hash_to_json_string`, where it may
  # later be parsed by `JSON.parse` in the `json_string_to_ruby_hash` method
  #
  # @param  [Hash] ruby `Hash` to be converted to `JSON` string
  # @return [String]
  def ruby_hash_to_json_string(hash)
    hash.to_json
  end
    
        return unless download.file?
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
        def replace_vars(less)
      less = less.dup
      # skip header comment
      less =~ %r(\A/\*(.*?)\*/)m
      from           = $~ ? $~.to_s.length : 0
      less[from..-1] = less[from..-1].
          gsub(/(?!@mixin|@media|@page|@keyframes|@font-face|@-\w)@/, '$').
          # variables that would be ignored by gsub above: e.g. @page-header-border-color
          gsub(/@(page[\w-]+)/, '$\1')
      less
    end
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
    Cucumber::Rails::Database.autorun_database_cleaner = true
Cucumber::Rails::World.use_transactional_tests = false
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        it 'does not let a user destroy other likes' do
      like2 = eve.like!(@message)
      like_count = Like.count
    
    # Declares a dependency to the git repo of CocoaPods gem. This declaration is
# compatible with the local git repos feature of Bundler.
#
def cp_gem(name, repo_name, branch = 'master', path: false)
  return gem name if SKIP_UNRELEASED_VERSIONS
  opts = if path
           { :path => '../#{repo_name}' }
         else
           url = 'https://github.com/CocoaPods/#{repo_name}.git'
           { :git => url, :branch => branch }
         end
  gem name, opts
end
    
                target 'Static' do
                use_frameworks!(false)
            end
            target 'Dynamic' do
                use_frameworks!(true)
            end
        end
    end
end
    
        def self.verify_xcode_license_approved!
      if `/usr/bin/xcrun clang 2>&1` =~ /license/ && !$?.success?
        raise Informative, 'You have not agreed to the Xcode license, which ' \
          'you must do to use CocoaPods. Agree to the license by running: ' \
          '`xcodebuild -license`.'
      end
    end
  end
end

    
        def ask(key, default=nil, options={})
      question = Question.new(key, default, options)
      set(key, question)
    end