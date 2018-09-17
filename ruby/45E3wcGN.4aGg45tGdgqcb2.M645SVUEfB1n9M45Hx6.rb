
        
                def render(&block)
          options = @options.stringify_keys
          tag_value = options.delete('value')
          name_and_id = options.dup
    
          []
    end
    
      UserOption.where(user_id: smoke_user.id).update_all(
    email_direct: false,
    email_digests: false,
    email_private_messages: false,
  )
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{staff.id}'
      end
    end
  end
end

    
            it 'fails to find the live_version of a bundle' do
          expect do
            bundle.live_version
          end.to raise_error('We do not support BUNDLE types right now')
        end
      end
    end
    
        it 'has authType of non-sa' do
      response = double
      allow(response).to receive(:status).and_return(412)
      allow(response).to receive(:body).and_return({ 'authType' => 'non-sa' })
      allow_any_instance_of(Spaceship::Client).to receive(:request).and_return(response)
    
              return true
        rescue FastlaneCore::Interface::FastlaneBuildFailure => ex
          # Specifically catching FastlaneBuildFailure to prevent build/compile errors from being
          # silenced when :fail_build is set to false
          # :fail_build should only suppress testing failures
          raise ex
        rescue => ex
          if values[:fail_build]
            raise ex
          end
        ensure
          unless values[:derived_data_path].to_s.empty?
            Actions.lane_context[SharedValues::SCAN_DERIVED_DATA_PATH] = values[:derived_data_path]
            plist_files_after = test_summary_filenames(values[:derived_data_path])
            all_test_summaries = (plist_files_after - plist_files_before)
            Actions.lane_context[SharedValues::SCAN_GENERATED_PLIST_FILES] = all_test_summaries
            Actions.lane_context[SharedValues::SCAN_GENERATED_PLIST_FILE] = all_test_summaries.last
          end
        end
      end
    
          unless result
        error_string = 'Could not set team ID to '#{team_id}', only found the following available teams:\n\n#{available_teams.map { |team| '- #{team[:team_id]} (#{team[:team_name]})' }.join('\n')}\n'
        raise Tunes::Error.new, error_string
      end
    
            set_of_simulators.to_a
      end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
      def set_statuses
    @statuses = scope_for_collection
    @statuses = cache_collection(@statuses, Status)
  end
    
        def update
      authorize @user, :change_email?
    
        def enable
      authorize @custom_emoji, :enable?
      @custom_emoji.update!(disabled: false)
      log_action :enable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.enabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
        def resubscribe
      authorize :instance, :resubscribe?
      params.require(:by_domain)
      Pubsubhubbub::SubscribeWorker.push_bulk(subscribeable_accounts.pluck(:id))
      redirect_to admin_instances_path
    end
    
            format('%*e', 20, 109.52).should == '        1.095200e+02'
        format('%*E', 20, 109.52).should == '        1.095200E+02'
        format('%*f', 20, 10.952).should == '           10.952000'
        format('%*g', 20, 12.1234).should == '             12.1234'
        format('%*G', 20, 12.1234).should == '             12.1234'
        format('%*a', 20, 196).should == '           0x1.88p+7'
        format('%*A', 20, 196).should == '           0X1.88P+7'
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
        $Kernel_trace_var_global = 'foo'
    
    def source_version
  @source_version ||= File.read(File.expand_path('../VERSION', __FILE__)).strip
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
    
    module Jekyll
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end