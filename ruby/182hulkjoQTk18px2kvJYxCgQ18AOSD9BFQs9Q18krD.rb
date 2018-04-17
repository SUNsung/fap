
        
          def present_hash(hash, skip_key = nil)
    hash.to_a.sort_by {|a| a.first.to_s }.map { |k, v| '#{k}: #{v}' unless k.to_s == skip_key.to_s }.compact
  end
end

    
          if options[:type] == :array && (options[:values].blank? || !options[:values].is_a?(Array))
        raise ArgumentError.new('When using :array as :type you need to provide the :values as an Array')
      end
    
        respond_to do |format|
      format.html
      format.json { render json: @user_credential }
    end
  end
    
        def matching_username
      Account.where(Account.arel_table[:username].lower.eq username.to_s.downcase)
    end
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
    describe Settings::PreferencesController do
  render_views
    
    module Admin
  class PodsController < AdminController
    respond_to :html, :json, :mobile
    
        def initialize(attributes={})
      assign_attributes(attributes)
      yield(self) if block_given?
    end
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
    module Api
  module OpenidConnect
    class TokenEndpointController < ApplicationController
      skip_before_action :verify_authenticity_token
    
      def _log(level, message)
    @messages << [level, message]
  end
end

    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
        # Starts the read-eval-print loop.
    def run
      environment = Environment.new
      @line = 0
      loop do
        @line += 1
        unless (text = Readline.readline('>> '))
          puts
          return
        end
    
            def keyword_argument?
          %i[kwarg kwoptarg].include?(@declaration_node.type)
        end
    
              each_misplaced_optional_arg(arguments) do |argument|
            add_offense(argument)
          end
        end
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral