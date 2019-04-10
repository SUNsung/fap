
        
            # Extract the command string
    self.cmd_string = header.slice!(/.+\r\n/)
    
        # /%3faaa=bbbbb
    # which could possibly decode to '/?aaa=bbbbb', which if the IDS normalizes first, then splits the URI on ?, then it can be bypassed
    if self.junk_param_start
      str.sub!(/\//, '/%3f' + Rex::Text.rand_text_alpha(rand(5) + 1) + '=' + Rex::Text.rand_text_alpha(rand(10) + 1) + '/../')
    end
    
              # Encodes the end_time field
          #
          # @return [String]
          def encode_end_time
            [end_time].pack('N')
          end