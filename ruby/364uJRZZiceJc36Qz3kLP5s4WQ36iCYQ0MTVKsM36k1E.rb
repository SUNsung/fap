
        
        class BugTest < Minitest::Test
  def test_stuff
    assert 'zomg'.present?
    refute ''.present?
  end
end

    
      def test_touching_an_attribute_updates_timestamp_with_given_time
    previously_updated_at = @developer.updated_at
    previously_created_at = @developer.created_at
    new_time = Time.utc(2015, 2, 16, 4, 54, 0)
    @developer.touch(:created_at, time: new_time)
    
    class Mysql2ActiveSchemaTest < ActiveRecord::Mysql2TestCase
  include ConnectionHelper
    
    require 'action_mailbox'
    
        # Obtain destination path.
    #
    # dest - The String path to the destination dir.
    #
    # Returns destination file path.
    def destination(dest)
      dest = @site.in_dest_dir(dest)
      @site.in_dest_dir(dest, Jekyll::URL.unescape_path(url))
    end
    
        should 'render fenced code blocks with syntax highlighting' do
      result = nokogiri_fragment(@markdown.convert(<<~MARKDOWN))
        ~~~ruby
        puts 'Hello World'
        ~~~
      MARKDOWN
      div_highlight = '>div.highlight'
      selector = 'div.highlighter-rouge#{div_highlight}>pre.highlight>code'
      refute(result.css(selector).empty?, result.to_html)
    end
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        unless %w[HEAD GET].include?(request.method)
      vprint_error('Ignoring #{request.method} request')
      return
    end
    
      #
  # Generates a URI with a given checksum and optionally with an embedded UUID if
  # the desired length can accommodate it.
  #
  # @param mode [Symbol] The type of checksum to generate (:connect, :init_native, :init_python, :init_java)
  # @param len [Integer] The length of the URI not including the leading slash, optionally nil for random
  # @return [String] A URI with a leading slash that hashes to the checksum, with an optional UUID
  #
  def generate_uri_uuid_mode(mode, len = nil, uuid: nil)
    sum = uri_checksum_lookup(mode)
    
        print_good('Persistent Script written to #{temprexe}')
    @clean_up_rc << 'rm #{temprexe.gsub('\\', '\\\\\\\\')}\n'
    temprexe
  end
    
      # Under Phusion Passenger smart spawning, we need to reopen all IO streams
  # after workers have forked.
  #
  # The rolling file appender uses shared file locks to ensure that only one
  # process will roll the log file. Each process writing to the file must have
  # its own open file descriptor for `flock` to function properly. Reopening
  # the file descriptors after forking ensures that each worker has a unique
  # file descriptor.
  if defined? PhusionPassenger
    PhusionPassenger.on_event(:starting_worker_process) do |forked|
      Logging.reopen if forked
    end
  end
end
    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
    def await_condition &condition
  start_time = Time.zone.now
  until condition.call
    return false if (Time.zone.now - start_time) > Capybara.default_max_wait_time
    sleep 0.05
  end
  true
end

    
          sign_in alice, scope: :user
    end
    
          it 'doesn't post' do
        expect(alice).not_to receive(:like!)
        post :create, params: like_hash
        expect(response.code).to eq('422')
      end
    end
    
        describe 'special case for start sharing notifications' do
      it 'should not provide a contacts menu for standard notifications' do
        FactoryGirl.create(:notification, :recipient => alice, :target => @post)
        get :index, params: {per_page: 5}
        expect(Nokogiri(response.body).css('.aspect_membership')).to be_empty
      end
    
    end

    
      def update
    if @ip_pool.update(safe_params)
      redirect_to_with_json [:edit, @ip_pool], :notice => 'IP Pool has been updated.'
    else
      render_form_errors 'edit', @ip_pool
    end
  end
    
      def toggle_ssl
    @track_domain.update(:ssl_enabled => !@track_domain.ssl_enabled)
    redirect_to_with_json [organization, @server, :track_domains], :notice => 'SSL settings for #{@track_domain.full_name} updated successfully.'
  end
    
      def verify
    if request.post?
      if params[:code].to_s.strip == current_user.email_verification_token.to_s || (Rails.env.development? && params[:code].to_s.strip == '123456')
        current_user.verify!
        redirect_to_with_json [:return_to, root_path], :notice => 'Thanks - your e-mail address has been verified successfully.'
      else
        flash_now :alert, 'The code you've entered isn't correct. Please check and try again.'
      end
    end
  end