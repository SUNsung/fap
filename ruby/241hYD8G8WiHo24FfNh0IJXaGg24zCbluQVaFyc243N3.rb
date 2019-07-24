
        
            should 'print a nice list of static files' do
      time_regexp = '\\d+:\\d+'
      #
      # adding a pipe character at the beginning preserves formatting with newlines
      expected_output = Regexp.new <<~OUTPUT
        | - /css/screen.css last edited at #{time_regexp} with extname .css
          - /pgp.key last edited at #{time_regexp} with extname .key
          - /products.yml last edited at #{time_regexp} with extname .yml
          - /symlink-test/symlinked-dir/screen.css last edited at #{time_regexp} with extname .css
      OUTPUT
      assert_match expected_output, File.read(dest_dir('static_files.html'))
    end
  end
    
              @highlighter = begin
            if @config.key?('enable_coderay') && @config['enable_coderay']
              Jekyll::Deprecator.deprecation_message(
                'You are using 'enable_coderay', ' \
                'use syntax_highlighter: coderay in your configuration file.'
              )
    
            warden.logout(scope)
        warden.clear_strategies_cache!(scope: scope)
        instance_variable_set(:'@current_#{scope}', nil)
    
          # Update password saving the record and clearing token. Returns true if
      # the passwords are valid and the record was saved, false otherwise.
      def reset_password(new_password, new_password_confirmation)
        if new_password.present?
          self.password = new_password
          self.password_confirmation = new_password_confirmation
          save
        else
          errors.add(:password, :blank)
          false
        end
      end
    
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

    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end
    
    module VagrantHelpers
  extend self
    
          attr_reader :key, :default, :options
    
      option ['--cloud.id'], 'CLOUD_ID',
    I18n.t('logstash.runner.flag.cloud_id'),
    :attribute_name => 'cloud.id'
    
    require 'bootstrap/environment'
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
end

    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
end

    
            def create
          authorize! :create, Spree.user_class
          @user = Spree.user_class.new(user_params)
          if @user.save
            respond_with(@user, status: 201, default_template: :show)
          else
            invalid_resource!(@user)
          end
        end
    
    if ENV['COVERAGE']
  require 'simplecov'
  SimpleCov.start do
    add_filter '/test/'
    add_filter '/myapp/'
  end
end
    
          it 'displays the correct output' do
        mock_stats = OpenStruct.new(
          processed: 420710,
          failed: 12,
          workers_size: 34,
          enqueued: 56,
          retry_size: 78,
          scheduled_size: 90,
          dead_size: 666
        )
        Sidekiq::Stats.stub(:new, mock_stats) do
          assert_includes output, 'Processed: 420,710'
          assert_includes output, 'Failed: 12'
          assert_includes output, 'Busy: 34'
          assert_includes output, 'Enqueued: 56'
          assert_includes output, 'Retries: 78'
          assert_includes output, 'Scheduled: 90'
          assert_includes output, 'Dead: 666'
        end
      end
    end
    
            assert_equal 0, Sidekiq::Queue.new('queue_1').size
        assert_equal 1, Sidekiq::Queue.new('queue_2').size
        assert_equal 0, Sidekiq::Queue.new('queue_5').size
        assert_equal 1, Sidekiq::Queue.new('queue_6').size
      ensure
        Sidekiq.client_middleware.remove MyStopper
      end
    end