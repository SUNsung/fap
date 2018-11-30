
        
        def version
  Jekyll::VERSION
end
    
            def print_message(json_message)
          msg = JSON.parse(json_message)
          # Not sure what the 'url' command even does in LiveReload.  The spec is silent
          # on its purpose.
          Jekyll.logger.info 'LiveReload:', 'Browser URL: #{msg['url']}' if msg['command'] == 'url'
        end
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def print_dir(root)
    dirs = []
    remaining_root_files = []
    other = ''
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
          it 'should remove participation' do
        delete :destroy, params: {post_id: post.id}
        expect(alice.participations.where(:target_id => post.id)).not_to exist
        expect(response.code).to eq('200')
      end
    end
    
              code = InvitationCode.create(user: bob)
    
    # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
          if specs
        title 'Running the specs'
        sh 'bundle exec bacon #{specs('**/*')}'
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
          it 'allows closing brace on different line from multi-line element' do
        expect_no_offenses(construct(false, a, make_multi(multi), true))
      end
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
            def delimiter_delta
          return 0 if first.same_line?(second)
          return 0 if first.delimiter != second.delimiter