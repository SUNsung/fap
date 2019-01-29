
        
                # Halt the machine. This method should gracefully shut down the
        # operating system. This method will cause `vagrant halt` and associated
        # commands to _block_, meaning that if the machine doesn't halt
        # in a reasonable amount of time, this method should just return.
        #
        # If when this method returns, the machine's state isn't 'powered_off,'
        # Vagrant will proceed to forcefully shut the machine down.
        def halt
          raise BaseError, _key: :unsupported_halt
        end
    
        it 'returns the time at which the file was modified when passed ?M' do
      Kernel.test(?M, @tmp_file).should == @tmp_file.mtime
    end
  end
    
      after :each do
    Object.send :remove_method, :boom
  end
    
          when IAX_CTRL_RINGING
        dprint('RINGING')
        self.client.send_ack(self)
    
                encoded
          end
    
                seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end
    
              count_on_hand = 0
          if params[:stock_item].key?(:count_on_hand)
            count_on_hand = params[:stock_item][:count_on_hand].to_i
            params[:stock_item].delete(:count_on_hand)
          end
    
            def jstree
          show
        end