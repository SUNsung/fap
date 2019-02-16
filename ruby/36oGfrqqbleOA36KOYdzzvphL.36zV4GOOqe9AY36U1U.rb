
        
          #
  # Initializes an HTTP packet header class that inherits from a Hash base
  # class.
  #
  def initialize
    self.dcase_hash = {}
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
      # Setup the root logger with the Rails log level and the desired set of
  # appenders. The list of appenders to use should be set in the environment
  # specific configuration file.
  #
  # For example, in a production application you would not want to log to
  # STDOUT, but you would want to send an email for 'error' and 'fatal'
  # messages:
  #
  # => config/environments/production.rb
  #
  #     config.log_to = %w[file email]
  #
  # In development you would want to log to STDOUT and possibly to a file:
  #
  # => config/environments/development.rb
  #
  #     config.log_to = %w[stdout file]
  #
  Logging.logger.root.appenders = config.log_to unless config.log_to.empty?
    
      class Notification < ApplicationRecord
  end
    
    Then (/^I should see the 'getting started' contents$/) do
  confirm_getting_started_contents
end

    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
        context 'on a post you partecipate to' do
      before { alice.participate! post }
    
    Given(/^a custom task to generate a file$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/database.rake')
end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
            print_deprecation_warnings_if_applicable
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug