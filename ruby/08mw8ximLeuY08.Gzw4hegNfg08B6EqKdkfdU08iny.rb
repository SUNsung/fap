
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
          #
    
      File.write(Paths.status_file, p.exitstatus)
  File.open(Paths.output_file, 'wb') do |f|
    f.print '$ '
    f.puts args.join(' ')
    f.puts output
    f.puts 'EXIT STATUS: #{p.exitstatus}'
  end
    
    module Jekyll
  module Converters
    class Markdown
      class KramdownParser
        CODERAY_DEFAULTS = {
          'css'               => 'style',
          'bold_every'        => 10,
          'line_numbers'      => 'inline',
          'line_number_start' => 1,
          'tab_width'         => 4,
          'wrap'              => 'div',
        }.freeze
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent2])
    end
    
      let :reverted_template do
    old_template.merge('url' => '{{ url }}')
  end
    
        private
    
            # Remove examples
        css('.runnable-example').each do |node|
          node.parent.remove
        end
    
      def remove_linked_keg_record
    linked_keg_record.unlink
    linked_keg_record.parent.rmdir_if_possible
  end
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
          #{GitHub::ALL_SCOPES_URL}
        #{Utils::Shell.set_variable_in_profile('HOMEBREW_GITHUB_API_TOKEN', 'your_token_here')}
    
        ff = if ARGV.named.empty?
      Formula.installed.sort
    else
      ARGV.resolved_formulae.sort
    end
    
    # Get the version string. If this is being installed from Git,
# this includes the proper prerelease version.
def get_version
  File.read(scope('VERSION').strip)
end
    
        # Converts the CSS template into Sass or SCSS code.
    #
    # @param fmt [Symbol] `:sass` or `:scss`, designating the format to return.
    # @return [String] The resulting Sass or SCSS code
    # @raise [Sass::SyntaxError] if there's an error parsing the CSS template
    def render(fmt = :sass)
      check_encoding!
      build_tree.send('to_#{fmt}', @options).strip + '\n'
    rescue Sass::SyntaxError => err
      err.modify_backtrace(:filename => @options[:filename] || '(css)')
      raise err
    end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end
