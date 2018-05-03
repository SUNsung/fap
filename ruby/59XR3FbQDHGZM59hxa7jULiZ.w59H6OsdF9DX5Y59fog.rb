
        
        class JavaScriptHelperTest < ActionView::TestCase
  tests ActionView::Helpers::JavaScriptHelper
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
            case method
        when NilClass
          raise 'Delivery method cannot be nil'
        when Symbol
          if klass = delivery_methods[method]
            mail.delivery_method(klass, (send(:'#{method}_settings') || {}).merge(options || {}))
          else
            raise 'Invalid delivery method #{method.inspect}'
          end
        else
          mail.delivery_method(method)
        end
    
      test 'delivery method can be customized per instance' do
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        email = DeliveryMailer.welcome.deliver_now
        assert_instance_of Mail::SMTP, email.delivery_method
        email = DeliveryMailer.welcome(delivery_method: :test).deliver_now
        assert_instance_of Mail::TestMailer, email.delivery_method
      end
    end
  end
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          generate_helpers!(Devise::URL_HELPERS)
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
      # Returns true if the set is a proper superset of the given set.
  def proper_superset?(set)
    case
    when set.instance_of?(self.class) && @hash.respond_to?(:>)
      @hash > set.instance_variable_get(:@hash)
    when set.is_a?(Set)
      size > set.size && set.all? { |o| include?(o) }
    else
      raise ArgumentError, 'value must be a set'
    end
  end
  alias > proper_superset?
    
      it 'implicitly has a count of one when no count is specified' do
    'abc'.unpack(unpack_format).should == ['a']
  end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      it 'runs nested ensure clauses' do
    ScratchPad.record []
    @outer = Thread.new do
      begin
        @inner = Thread.new do
          begin
            sleep
          ensure
            ScratchPad << :inner_ensure_clause
          end
        end
        sleep
      ensure
        ScratchPad << :outer_ensure_clause
        @inner.send(@method)
        @inner.join
      end
    end
    Thread.pass while @outer.status and @outer.status != 'sleep'
    Thread.pass until @inner
    Thread.pass while @inner.status and @inner.status != 'sleep'
    @outer.send(@method)
    @outer.join
    ScratchPad.recorded.should include(:inner_ensure_clause)
    ScratchPad.recorded.should include(:outer_ensure_clause)
  end
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end
    
      def enough_poll_answers
    errors.add(:poll_answers, I18n.t('activerecord.errors.models.poll.attributes.poll_answers.not_enough_poll_answers')) if poll_answers.size < 2
  end
    
        def initialize(attributes={})
      assign_attributes(attributes)
      yield(self) if block_given?
    end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    module Jekyll
    
        def script_url_for(gist_id, filename)
      url = 'https://gist.github.com/#{gist_id}.js'
      url = '#{url}?file=#{filename}' unless filename.nil? or filename.empty?
      url
    end
    
      # Checks for excerpts (helpful for template conditionals)
  def has_excerpt(input)
    input =~ /<!--\s*more\s*-->/i ? true : false
  end