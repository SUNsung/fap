
        
              def self.required_fields(klass)
        required_methods = [:confirmation_token, :confirmed_at, :confirmation_sent_at]
        required_methods << :unconfirmed_email if klass.reconfirmable
        required_methods
      end
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
        def translation_scope
      'devise.passwords'
    end
end

    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
    def process_args
  if ARGV.first =~ %r{^-+h(?:elp)?$}
    puts usage
    exit 0
  elsif ARGV.length == 1
    $app_path = ARGV.first
  else
    puts usage
    exit 1
  end
end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 110 and pkt.tcp_dport != 110)
    s = find_session((pkt.tcp_sport == 110) ? get_session_src(pkt) : get_session_dst(pkt))
    
    require 'rubygems'
require 'rjb'
    
    class Source < Template
  attr_accessor :__CAL
  attr_accessor :__NR_execve
  attr_accessor :__NR_getpeername
  attr_accessor :__NR_accept
  attr_accessor :__NR_listen
  attr_accessor :__NR_bind
  attr_accessor :__NR_socket
  attr_accessor :__NR_connect
  attr_accessor :__NR_close
  attr_accessor :__NR_kfcntl
  attr_accessor :__cal
  attr_accessor :_cal
  attr_accessor :cal
  attr_accessor :ver
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'
    
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
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end