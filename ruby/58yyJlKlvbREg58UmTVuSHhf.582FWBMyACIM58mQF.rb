
        
          def brief_build_info(f)
    build_time_str = f.logs.ctime.strftime('%Y-%m-%d %H:%M:%S')
    s = <<~EOS
      Homebrew build logs for #{f.full_name} on #{OS_VERSION}
    EOS
    if ARGV.include?('--with-hostname')
      hostname = Socket.gethostname
      s << 'Host: #{hostname}\n'
    end
    s << 'Build date: #{build_time_str}\n'
    s
  end
    
              debian_pattern = %r{^git://anonscm\.debian\.org/users/(.*)}i
          audit_urls(urls, debian_pattern) do |match, url|
            problem '#{url} should be `https://anonscm.debian.org/git/users/#{match[1]}`'
          end
    
            def name
          @node.children.first
        end
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies the use of `Regexp#match` or `String#match`, which
      # returns `#<MatchData>`/`nil`. The return value of `=~` is an integral
      # index/`nil` and is more performant.
      #
      # @example
      #   # bad
      #   do_something if str.match(/regex/)
      #   while regex.match('str')
      #     do_something
      #   end
      #
      #   # good
      #   method(str =~ /regex/)
      #   return value unless regex =~ 'str'
      class RedundantMatch < Cop
        MSG = 'Use `=~` in places where the `MatchData` returned by ' \
              '`#match` will not be used.'.freeze
    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'