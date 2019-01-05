
        
            def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
      def hub_topic_uri
    @_hub_topic_uri ||= Addressable::URI.parse(hub_topic).normalize
  end
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
        head 200
  end
    
          expect(cop.offenses.size).to eq(1)
    end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
            def delta(first, second, alignment = :left)
          case alignment
          when :left
            first.column - second.column
          when :right
            first.last_column - second.last_column
          else
            0
          end
        end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end