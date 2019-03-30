
        
          context 'every shim script' do
    it 'has valid bash syntax' do
      # These have no file extension, but can be identified by their shebang.
      (HOMEBREW_LIBRARY_PATH/'shims').find do |path|
        next if path.directory?
        next if path.symlink?
        next unless path.executable?
        next unless path.read(12) == '#!/bin/bash\n'
    
      describe '#merge' do
    it 'returns itself' do
      expect(env.merge([])).to be env
    end
  end
    
        when IAX_TYPE_CONTROL
      case stype
      when IAX_CTRL_HANGUP
        dprint('HANGUP')
        self.client.send_ack(self)
        self.state = :hangup
    
    
IAX2_DEFAULT_PORT = 4569
    
    require 'rex/proto/ipmi/utils'
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
                encoded
          end
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
              # Decodes the options field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_options(input)
            input.value[0].value.unpack('N')[0]
          end
    
              # Decodes the Rex::Proto::Kerberos::Model::KdcResponse from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KdcResponse, invalid input'
            end
    
          it 'left-justifies the result if width is negative' do
        format('%*b', -10, 10).should == '1010      '
        format('%*B', -10, 10).should == '1010      '
        format('%*d', -10, 112).should == '112       '
        format('%*i', -10, 112).should == '112       '
        format('%*o', -10, 87).should == '127       '
        format('%*u', -10, 112).should == '112       '
        format('%*x', -10, 196).should == 'c4        '
        format('%*X', -10, 196).should == 'C4        '
    
    describe 'Kernel#srand' do
  it 'needs to be reviewed for spec completeness'
end

    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
          private
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
    module RuboCop
  module AST
    # Common functionality for nodes that are parameterized:
    # `send`, `super`, `zsuper`, `def`, `defs`
    module ParameterizedNode
      # Checks whether this node's arguments are wrapped in parentheses.
      #
      # @return [Boolean] whether this node's arguments are
      #                   wrapped in parentheses
      def parenthesized?
        loc.end && loc.end.is?(')')
      end
    
          # Calls the given block for each condition node in the `when` branch.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_condition
        return conditions.to_enum(__method__) unless block_given?
    
        def handle_switch(cop_names, names, disabled, extras, comment)
      cop_names.each do |name|
        names[name] ||= 0
        if disabled
          names[name] += 1
        elsif names[name] > 0
          names[name] -= 1
        else
          extras << [comment, name]
        end
      end
    end
  end
end

    
        it 'is able to search orders using only completed at input' do
      fill_in 'q_created_at_gt', with: Date.current
      click_on 'Filter Results'
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
            private