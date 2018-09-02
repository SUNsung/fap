
        
              ::Sass.load_paths << stylesheets_path
    
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
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true