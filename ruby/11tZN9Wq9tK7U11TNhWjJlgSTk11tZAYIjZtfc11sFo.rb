
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          def print_worst_offenders
        @io.puts
        @io.puts 'Worst offenders:'
        @timings.sort_by { |_f, t| -t }.take(10).each do |(f, t)|
          @io.puts '  #{t}s for #{f}'
        end
        @io.puts
      end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
        delegate :empty?, :blank?, to: :pages
    
          request_all initial_urls do |response|
        next unless data = handle_response(response)
        yield data
        next unless data[:internal_urls].present?
        next_urls = data[:internal_urls].select { |url| history.add?(url.downcase) }
        instrument 'queued.scraper', urls: next_urls
        next_urls
      end
    end
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
            css('h1').each_with_index do |node, i|
          next if i == 0
          node.name = 'h2'
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        # Not using this during integration tests makes the tests 4x times faster
    # without changing the coverage.
    track_files '#{SimpleCov.root}/{#{subdirs},*.rb}'
  end
    
    module UnpackStrategy
  class Air
    include UnpackStrategy
    
      def test_to_a
    ENV.clear
    ENV['foo'] = 'bar'
    ENV['baz'] = 'qux'
    a = ENV.to_a
    assert_equal(2, a.size)
    if IGNORE_CASE
      a = a.map {|x| x.map {|y| y.upcase } }
      assert(a == [%w(FOO BAR), %w(BAZ QUX)] || a == [%w(BAZ QUX), %w(FOO BAR)])
    else
      assert(a == [%w(foo bar), %w(baz qux)] || a == [%w(baz qux), %w(foo bar)])
    end
  end
    
      module_function
  # Run Ruby script with --jit-wait (Synchronous JIT compilation).
  # Returns [stdout, stderr]
  def eval_with_jit(env = nil, script, **opts)
    stdout, stderr = nil, nil
    # retry 3 times while cc1 error happens.
    3.times do |i|
      stdout, stderr, status = eval_with_jit_without_retry(env, script, **opts)
      assert_equal(true, status.success?, 'Failed to run script with JIT:\n#{code_block(script)}\nstdout:\n#{code_block(stdout)}\nstderr:\n#{code_block(stderr)}')
      break unless retried_stderr?(stderr)
    end
    [stdout, stderr]
  end
    
                  @options = @opts.dup
              suites = MiniTest::Unit::TestCase.test_suites
    
      def teardown
    super
  end