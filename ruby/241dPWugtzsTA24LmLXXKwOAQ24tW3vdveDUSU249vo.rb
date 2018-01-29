  def render_response
    render json: {
      html: view_to_html_string('shared/notifications/_button', notification_setting: @notification_setting),
      saved: @saved
    }
  end
    
      describe '#message' do
    msg = /osxfuse is already installed from the binary distribution/
    its(:message) { is_expected.to match(msg) }
  end
end

    
            def_node_matcher :redundant_regex?, <<-PATTERN
          {(send $!nil? {:match :=~} (regexp (str $#literal_at_end?) (regopt)))
           (send (regexp (str $#literal_at_end?) (regopt)) {:match :=~} $_)}
        PATTERN
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
            private