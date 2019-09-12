
        
            # Generate 'basename without extension' and strip away any trailing periods.
    # NOTE: `String#gsub` removes all trailing periods (in comparison to `String#chomp`)
    def basename
      @basename ||= File.basename(name, extname).gsub(%r!\.*\z!, '')
    end
    
    module Jekyll
  module Drops
    class SiteDrop < Drop
      extend Forwardable
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    Then(/^the default stage files are created$/) do
  staging = TestApp.test_app_path.join('config/deploy/staging.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(staging)).to be true
  expect(File.exist?(production)).to be true
end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
        def add_filter(filter=nil, &block)
      if block
        raise ArgumentError, 'Both a block and an object were given' if filter
    
          def print_deprecation_warnings_if_applicable
        if using_default_scm?
          warn_add_git_to_capfile unless scm_plugin_installed?
        elsif built_in_scm_name?
          warn_set_scm_is_deprecated
        elsif third_party_scm_name?
          warn_third_party_scm_must_be_upgraded
        end
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
      before { sign_in user }
    
      describe 'PUT /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
      def delete_confirm?
    update?
  end
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end
    
      def destroy
    @page = Page.find(params[:id])
    @page.destroy
    redirect_to '/internal/pages'
  end
    
        def URIEncodePair(cc1, cc2, result, index)
      u = ((cc1 >> 6) & 0xF) + 1;
      w = (cc1 >> 2) & 0xF;
      x = cc1 & 3;
      y = (cc2 >> 6) & 0xF;
      z = cc2 & 63;
      octets = Array.new(4);
      octets[0] = (u >> 2) + 240;
      octets[1] = (((u & 3) << 4) | w) + 128;
      octets[2] = ((x << 4) | y) + 128;
      octets[3] = z + 128;
      return URIEncodeOctets(octets, result, index);
    end
    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@wiki.user_icons}')
        else
          super
        end
      end
    
          def css # custom css
        @css
      end
    
      test 'create sets the correct path for a relative path subdirectory' do
    dir  = 'foodir'
    name = '#{dir}/bar'
    get '/create/#{name}'
    assert_match(/\/#{dir}/, last_response.body)
    assert_no_match(/[^\/]#{dir}/, last_response.body)
  end
    
        def wiki_new
      Gollum::Wiki.new(settings.gollum_path, settings.wiki_options)
    end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
          assert SomeScheduledWorker.perform_in(5.days.from_now, 'mike')
      assert_equal 3, ss.size
    
      describe 'error handling' do
    it 'deals with user-specified error handlers which raise errors' do
      output = capture_logging do
        begin
          Sidekiq.error_handlers << proc {|x, hash|
            raise 'boom'
          }
          cli = Sidekiq::CLI.new
          cli.handle_exception(RuntimeError.new('hello'))
        ensure
          Sidekiq.error_handlers.pop
        end
      end
      assert_includes output, 'boom'
      assert_includes output, 'ERROR'
    end
  end