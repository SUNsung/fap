        if subscription_klass && ActionCable::Channel::Base >= subscription_klass
          subscription = subscription_klass.new(connection, id_key, id_options)
          subscriptions[id_key] = subscription
          subscription.subscribe_to_channel
        else
          logger.error 'Subscription class not found: #{id_options[:channel].inspect}'
        end
      end
    
          # Returns an escaped version of +html+ without affecting existing escaped entities.
      #
      #   escape_once('1 < 2 &amp; 3')
      #   # => '1 &lt; 2 &amp; 3'
      #
      #   escape_once('&lt;&lt; Accept & Checkout')
      #   # => '&lt;&lt; Accept &amp; Checkout'
      def escape_once(html)
        ERB::Util.html_escape_once(html)
      end
    
          included do
        setup :setup_with_controller
        ActiveSupport.run_load_hooks(:action_view_test_case, self)
      end
    
            def _limit
          limit || DEFAULT_LIMIT
        end
    end
  end
end

    
      def test_helper_proxy
    methods = AllHelpersController.helpers.methods
    
          # Adds a new delivery method through the given class using the given
      # symbol as alias and the default options supplied.
      #
      #   add_delivery_method :sendmail, Mail::Sendmail,
      #     location:  '/usr/sbin/sendmail',
      #     arguments: '-i'
      def add_delivery_method(symbol, klass, default_options = {})
        class_attribute(:'#{symbol}_settings') unless respond_to?(:'#{symbol}_settings')
        send(:'#{symbol}_settings=', default_options)
        self.delivery_methods = delivery_methods.merge(symbol.to_sym => klass).freeze
      end
    
    puts 'Results stored in #{PROF_OUTPUT_FILE}'

    
    class Jekyll::Commands::NewTheme < Jekyll::Command
  class << self
    def init_with_program(prog)
      prog.command(:'new-theme') do |c|
        c.syntax 'new-theme NAME'
        c.description 'Creates a new Jekyll theme scaffold'
        c.option 'code_of_conduct', \
          '-c', '--code-of-conduct', \
          'Include a Code of Conduct. (defaults to false)'
    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end