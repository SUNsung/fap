
        
          has_many :special_nonexistent_posts, -> { where('posts.body = 'nonexistent'') }, class_name: 'SpecialPost'
  has_many :special_nonexistent_post_comments, -> { where('comments.post_id' => 0) }, through: :special_nonexistent_posts, source: :comments
  has_many :nonexistent_comments, through: :posts
    
      def initialize(*args)
    require 'docs'
    trap('INT') { puts; exit! } # hide backtrace on ^C
    super
  end
    
              if ADD_SUB_ENTRIES_KEYWORDS.include?(node.at_css('.keyword').try(:content))
            node.css('.subs > li').each do |sub_node|
              sub_link = sub_node.at_css('a')
              next unless sub_link['href'].start_with?('#')
              sub_name = sub_node.content.strip
              sub_name.remove! %r{\s.*}
              sub_name.prepend '#{name} '
              entries << [sub_name, sub_link['href'].remove('#')]
            end
          end
    
      # Returns a signed in resource from session (if one exists)
  def signed_in_resource
    warden.authenticate(scope: resource_name)
  end
    
        login_as User.create!(email: 'test@test.com', password: 'test123456', password_confirmation: 'test123456')
    
          def remove_domain_from_uri(uri)
        [uri.path.sub(/\A\/+/, '/'), uri.query].compact.join('?')
      end
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
              if recoverable.persisted?
            if recoverable.reset_password_period_valid?
              recoverable.reset_password(attributes[:password], attributes[:password_confirmation])
            else
              recoverable.errors.add(:reset_password_token, :expired)
            end
          end
    
    module Devise
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
      def test_trigonometric_functions
    assert_equal 0, CMath.asin(0)
    assert_equal 0, CMath.acos(1)
    assert_equal 0, CMath.atan(0)
    assert_equal 0, CMath.asinh(0)
    assert_equal 0, CMath.acosh(1)
    assert_equal 0, CMath.atanh(0)
    
      it 'returns the next character from the stream' do
    gz = Zlib::GzipReader.new @io
    gz.pos.should == 0
    
    describe :gzipreader_each, shared: true do
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not append anything to the stream' do
          @gz.ungetbyte nil
          @gz.read.should == ''
        end
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
    class SessionsController < Devise::SessionsController
  # rubocop:disable Rails/LexicallyScopedActionFilter
  before_action :authenticate_with_2fa, only: :create
  after_action :reset_authentication_token, only: :create
  before_action :reset_authentication_token, only: :destroy
  # rubocop:enable Rails/LexicallyScopedActionFilter
    
      # ==> Configuration for :encryptable
  # Allow you to use another encryption algorithm besides bcrypt (default). You can use
  # :sha1, :sha512 or encryptors from others authentication tools as :clearance_sha1,
  # :authlogic_sha512 (then you should set stretches above to 20 for default behavior)
  # and :restful_authentication_sha1 (then you should set stretches to 10, and copy
  # REST_AUTH_SITE_KEY to pepper).
  #
  # Require the `devise-encryptable` gem when using anything other than bcrypt
  # config.encryptor = :sha512
    
    if rails_env != 'development'
  config('path vendor/bundle')
  config('frozen true')
  config('disable_shared_gems true')
end
    
        unless user
      EmailInviter.new(email, inviter).send!
      flash[:notice] = 'invitation sent to #{email}'
    else
      flash[:notice]= 'error sending invite to #{email}'
    end
    redirect_to user_search_path, :notice => flash[:notice]
  end
    
          def render_error(error_description, detailed_error=nil)
        @error_description = error_description
        @detailed_error = detailed_error
        if request.format == :mobile
          render 'api/openid_connect/error/error.mobile', layout: 'application.mobile'
        else
          render 'api/openid_connect/error/error', layout: 'with_header_with_footer'
        end
      end
    end
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      def create
    begin
      comment = comment_service.create(params[:post_id], params[:text])
    rescue ActiveRecord::RecordNotFound
      render plain: I18n.t('comments.create.error'), status: 404
      return
    end
    
      def contacts_by_type(type)
    order = ['profiles.first_name ASC', 'profiles.last_name ASC', 'profiles.diaspora_handle ASC']
    contacts = case type
      when 'all'
        order.unshift 'receiving DESC'
        current_user.contacts
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'receiving'
        current_user.contacts.receiving
      when 'by_aspect'
        order.unshift 'contact_id IS NOT NULL DESC'
        contacts_by_aspect(@aspect.id)
      else
        raise ArgumentError, 'unknown type #{type}'
      end
    contacts.includes(person: :profile)
            .order(order)
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'allows multiple calls' do
      SetWorker.set(queue: :foo).set(bar: 'xyz').perform_async
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'ru,en')
    assert_equal 'ru', obj.locale
    
        assert_nil dead_set.find_job('000101')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000103')
  end
end

    
      it 'logs large payloads' do
    output = capture_logging(Logger::WARN) do
      SomeClass.delay.doit('a' * 8192)
    end
    assert_match(/#{SomeClass}.doit job argument is/, output)
  end
    
    describe Sidekiq::Middleware do
  before do
    $errors = []
  end
    
    class TimedWorker
  include Sidekiq::Worker