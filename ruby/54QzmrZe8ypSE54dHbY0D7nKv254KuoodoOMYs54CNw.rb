
        
          def recipients(payload = {})
    emails = interpolated(payload)['recipients']
    if emails.present?
      if emails.is_a?(String)
        [emails]
      else
        emails
      end
    else
      [user.email]
    end
  end
    
      private
    
        respond_to do |format|
      format.html { redirect_back events_path, notice: 'Event deleted.' }
      format.json { head :no_content }
    end
  end
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          if argv.empty? || argv.length > 2
            raise Vagrant::Errors::CLIInvalidUsage,
              help: opts.help.chomp
          end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
            context 'source with blank lines' do
          let(:source) do
            <<-RUBY.strip_indent
              #{type} Parent
    
      context 'same_line style' do
    let(:cop_config) { { 'EnforcedStyle' => 'same_line' } }