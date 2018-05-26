
        
          attr_accessor :output_buffer
  attr_reader :request
    
            if routes &&
           (routes.named_routes.route_defined?(selector) ||
             routes.mounted_helpers.method_defined?(selector))
          @controller.__send__(selector, *args)
        else
          super
        end
      end
    
      def persisted?
    id.present?
  end
    
    module ActionMailer
  # This module handles everything related to mail delivery, from registering
  # new delivery methods to configuring the mail object to be sent.
  module DeliveryMethods
    extend ActiveSupport::Concern
    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
    module ActionMailer
  class NonInferrableMailerError < ::StandardError
    def initialize(name)
      super 'Unable to determine the mailer to test from #{name}. ' \
        'You'll need to specify it using tests YourMailer in your ' \
        'test case definition'
    end
  end
    
      def test_assert_select_email_multipart
    AssertMultipartSelectMailer.test(html: '<div><p>foo</p><p>bar</p></div>', text: 'foo bar').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
end

    
    class I18nTestMailer < ActionMailer::Base
  configure do |c|
    c.assets_dir = ''
  end
    
    require 'pry'
$LOAD_PATH.unshift File.expand_path('../lib', __dir__)
require 'jekyll'
    
    #
    
    class Jekyll::Commands::NewTheme < Jekyll::Command
  class << self
    def init_with_program(prog)
      prog.command(:'new-theme') do |c|
        c.syntax 'new-theme NAME'
        c.description 'Creates a new Jekyll theme scaffold'
        c.option 'code_of_conduct', \
          '-c', '--code-of-conduct', \
          'Include a Code of Conduct. (defaults to false)'
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
          #-----------------------------------------------------------------------#
    end
  end
end

    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        module ClassMethods
      # This method is a shortcut to validator classes that is in
      # 'Attachment...Validator' format. It is almost the same thing as the
      # +validates+ method that shipped with Rails, but this is customized to
      # be using with attachment validators. This is helpful when you're using
      # multiple attachment validators on a single attachment.
      #
      # Example of using the validator:
      #
      #   validates_attachment :avatar, :presence => true,
      #      :content_type => { :content_type => 'image/jpg' },
      #      :size => { :in => 0..10.kilobytes }
      #
      def validates_attachment(*attributes)
        options = attributes.extract_options!.dup