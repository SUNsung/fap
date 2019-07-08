
        
        class Api::Web::SettingsController < Api::Web::BaseController
  respond_to :json
    
      def export_filename
    '#{controller_name}.csv'
  end
end

    
      def set_locale
    I18n.locale = default_locale
    I18n.locale = current_user.locale if user_signed_in?
  rescue I18n::InvalidLocale
    I18n.locale = default_locale
  end
    
      def rate_limited_request?
    !request.env['rack.attack.throttle_data'].nil?
  end
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
      included do
    before_action :set_user_activity
  end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
          it 'should remove participation' do
        delete :destroy, params: {post_id: post.id}
        expect(alice.participations.where(:target_id => post.id)).not_to exist
        expect(response.code).to eq('200')
      end
    end
    
    def ask(message, valid_options)
  if valid_options
    answer = get_stdin('#{message} #{valid_options.to_s.gsub(/'/, '').gsub(/, /,'/')} ') while !valid_options.include?(answer)
  else
    answer = get_stdin(message)
  end
  answer
end
    
    
  # Adds some extra filters used during the category creation process.
  module Filters
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end