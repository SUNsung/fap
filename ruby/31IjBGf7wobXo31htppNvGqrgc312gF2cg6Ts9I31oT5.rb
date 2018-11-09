
        
            def rescue_file_error(e)
      # We're also printing the new-lines, as otherwise the message is not very visible in-between the error and the stack trace
      puts('')
      FastlaneCore::UI.important('Error accessing file, this might be due to fastlane's directory handling')
      FastlaneCore::UI.important('Check out https://docs.fastlane.tools/advanced/#directory-behavior for more details')
      puts('')
      raise e
    end
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
          # Verify that value is the type that we're expecting, if we are expecting a type
      if data_type == Fastlane::Boolean
        ensure_boolean_type_passes_validation(value)
      else
        ensure_generic_type_passes_validation(value)
      end
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{Dir.home}/Library/Keychains/login.keychain &> /dev/null'
    
        # /%3faaa=bbbbb
    # which could possibly decode to '/?aaa=bbbbb', which if the IDS normalizes first, then splits the URI on ?, then it can be bypassed
    if self.junk_param_start
      str.sub!(/\//, '/%3f' + Rex::Text.rand_text_alpha(rand(5) + 1) + '=' + Rex::Text.rand_text_alpha(rand(10) + 1) + '/../')
    end
    
        # If keep-alive isn't enabled for this client, close the connection
    if (cli.keepalive == false)
      close_client(cli)
    end
  end
    
          when IAX_CTRL_BUSY
        dprint('BUSY')
        self.busy  = true
        self.state = :hangup
        self.client.send_ack(self)
    
                res = checksum + encrypted
            res
          end
        end
      end
    end
  end
end
    
                seq = OpenSSL::ASN1::Sequence.new(seqs)
    
              # @!attribute key
          #   @return [Integer] The type of encryption key
          attr_accessor :type
          # @!attribute value
          #   @return [String] the key itself
          attr_accessor :value
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
        <div id='cookies'>
      <h3 id='cookie-info'>COOKIES</h3>
      <% unless req.cookies.empty? %>
        <table class='req'>
          <tr>
            <th>Variable</th>
            <th>Value</th>
          </tr>
          <% req.cookies.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
          <% } %>
        </table>
      <% else %>
        <p class='no-data'>No cookie data.</p>
      <% end %>
      <div class='clear'></div>
    </div> <!-- /COOKIES -->
    
          alias react deny