
        
          def all_projects(current_user)
    projects = []
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
      fd  = File.open(out, 'a')
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 110 and pkt.tcp_dport != 110)
    s = find_session((pkt.tcp_sport == 110) ? get_session_src(pkt) : get_session_dst(pkt))
    
    puts '* System info:'
    
    require 'rubygems'
require 'rjb'
    
      when '6.1.1'
    __NR_execve      = 7
    __NR_getpeername = 202
    __NR_accept      = 229
    __NR_listen      = 232
    __NR_bind        = 234
    __NR_socket      = 235
    __NR_connect     = 236
    __NR_close       = 269
    __NR_kfcntl      = 614
    
      # A single media query.
  #
  #     [ [ONLY | NOT]? S* media_type S* | expression ] [ AND S* expression ]*
  class Query
    # The modifier for the query.
    #
    # When parsed as Sass code, this contains strings and SassScript nodes. When
    # parsed as CSS, it contains a single string (accessible via
    # \{#resolved_modifier}).
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    attr_accessor :modifier
    
            Readline::HISTORY << text
        parse_input(environment, text)
      end
    end