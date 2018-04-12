
        
        module Jobs
    
      def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
      describe '.all' do
    it 'uses the client to fetch all keys' do
      mock_client_response(:list_keys, with: no_args) do
        [
          {
            canDownload: false,
            canRevoke: true,
            keyId: 'some-key-id',
            keyName: 'Test Key via fastlane',
            servicesCount: 2
          },
          {
            canDownload: true,
            canRevoke: true,
            keyId: 'B92NE4F7RG',
            keyName: 'Test Key via browser',
            servicesCount: 2
          }
        ]
      end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file  --out=build/cloc.txt')
      end
    end
  end
end

    
            expect(result).to eq('hg parent --template {rev}')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template {rev}')
      end
    end
  end
end

    
        # .visible-sm { @include responsive-visibility() }
    # to:
    # @include responsive-visibility('.visible-sm')
    def apply_mixin_parent_selector(file, rule_sel)
      log_transform rule_sel
      replace_rules file, '\s*' + rule_sel, comments: false do |rule, rule_pos, css|
        body = unwrap_rule_block(rule.dup).strip
        next rule unless body =~ /^@include \w+/m || body =~ /^@media/ && body =~ /\{\s*@include/
        rule =~ /(#{COMMENT_RE}*)([#{SELECTOR_CHAR}\s*]+?)#{RULE_OPEN_BRACE_RE}/
        cmt, sel = $1, $2.strip
        # take one up selector chain if this is an &. selector
        if sel.start_with?('&')
          parent_sel = selector_for_pos(css, rule_pos.begin)
          sel        = parent_sel + sel[1..-1]
        end
        # unwrap, and replace @include
        unindent unwrap_rule_block(rule).gsub(/(@include [\w-]+)\(?([\$\w\-,\s]*)\)?/) {
          name, args = $1, $2
          sel.gsub(/\s+/, ' ').split(/,\s*/ ).map { |sel_part|
            '#{cmt}#{name}('#{sel_part}'#{', ' if args && !args.empty?}#{args})'
          }.join(';\n')
        }
      end
    end
    }
    
      # Use a different logger for distributed setups.
  # config.logger = ActiveSupport::TaggedLogging.new(SyslogLogger.new)
    
          spec['version'] = Bootstrap::VERSION