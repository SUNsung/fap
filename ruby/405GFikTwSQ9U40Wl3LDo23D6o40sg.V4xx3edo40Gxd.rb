
        
            # Returns the unwrapped subject and body of the last commit
    # <b>DEPRECATED:</b> Use <tt>last_git_commit_message</tt> instead.
    def self.last_git_commit
      UI.important('`last_git_commit` is deprecated. Please use `last_git_commit_message` instead.')
      last_git_commit_message
    end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
            expect(result).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
        def shared_mixins
      @shared_mixins ||= begin
        log_status '  Reading shared mixins from mixins.less'
        CLASSES_TO_MIXINS + read_mixins(read_files('less', bootstrap_less_files.grep(/mixins\//)).values.join('\n'),
                                        nested: NESTED_MIXINS)
      end
    end
    
            return if type.nil?
        return unless Hbc::Container.from_type(type).nil?
        raise 'invalid container type: #{type.inspect}'
      end
    
            ohai 'Trashing files:'
        puts resolved_paths.map(&:first)
        trash_paths(*resolved_paths.flat_map(&:last), **options)
      end
    
    # usage rake new_post[my-new-post] or rake new_post['my new post'] or rake new_post (defaults to 'new-post')
desc 'Begin a new post in #{source_dir}/#{posts_dir}'
task :new_post, :title do |t, args|
  if args.title
    title = args.title
  else
    title = get_stdin('Enter a title for your post: ')
  end
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  mkdir_p '#{source_dir}/#{posts_dir}'
  filename = '#{source_dir}/#{posts_dir}/#{Time.now.strftime('%Y-%m-%d')}-#{title.to_url}.#{new_post_ext}'
  if File.exist?(filename)
    abort('rake aborted!') if ask('#{filename} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
  end
  puts 'Creating new post: #{filename}'
  open(filename, 'w') do |post|
    post.puts '---'
    post.puts 'layout: post'
    post.puts 'title: \'#{title.gsub(/&/,'&amp;')}\''
    post.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M:%S %z')}'
    post.puts 'comments: true'
    post.puts 'categories: '
    post.puts '---'
  end
end
    
      def api_error?(error)
    error.is_a?(LogStash::Api::ApiError)
  end
    
        r0
  end
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end