
        
        module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
            def render
          options = @options.stringify_keys
          options['type']     = 'checkbox'
          options['value']    = @checked_value
          options['checked'] = 'checked' if input_checked?(options)
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        def to_ary
      paths.dup
    end
    
        # Direct access to partial rendering.
    def render_partial(context, options, &block) #:nodoc:
      PartialRenderer.new(@lookup_context).render(context, options, block)
    end
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
          #
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
          open_dry_run_modal(agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('http://xkcd.com/')
      end
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
        it 'for the afternoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 17)).to eq('5pm')
    end
  end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
        def fonts_path
      File.join assets_path, 'fonts'
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
    When /^I fill in the new user form/ do
  fill_in_new_user_form
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'returns a 404 for a post not visible to the user' do
      sign_in eve
      expect {
        get :index, params: {post_id: @message.id}
      }.to raise_error(ActiveRecord::RecordNotFound)
    end
    
        def print_config_variables
      ['--print-config-variables', '-p',
       'Display the defined config variables before starting the deployment tasks.',
       lambda do |_value|
         Configuration.env.set(:print_config_variables, true)
       end]
    end
  end
end

    
          attr_reader :key, :default, :options
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)
    
          def trusted_keys
        @trusted_keys.dup
      end
    
          NO_ARG_DIRECTIVES = %i(block_all_mixed_content disown_opener
                             upgrade_insecure_requests).freeze
    
            close_body(body) if reaction