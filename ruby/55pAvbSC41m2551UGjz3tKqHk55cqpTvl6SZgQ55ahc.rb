
        
        def liquid_escape(markdown)
  markdown.gsub(%r!(`{[{%].+[}%]}`)!, '{% raw %}\\1{% endraw %}')
end
    
    WITH_JUST_LIQUID_VAR = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. et metus fermentum, eu cursus lorem, ac dictum enim.
mattis. Curabitur vel dui et lacus rutrum suscipit et {{ title }} neque.
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
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
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
    #
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
              format('%+e', 109.52).should == '+1.095200e+02'
          format('%+E', 109.52).should == '+1.095200E+02'
          format('%+f', 10.952).should == '+10.952000'
          format('%+g', 12.1234).should == '+12.1234'
          format('%+G', 12.1234).should == '+12.1234'
          format('%+a', 196).should == '+0x1.88p+7'
          format('%+A', 196).should == '+0X1.88P+7'
        end
    
      it 'returns true when passed ?r if the argument is readable by the effective uid' do
    Kernel.test(?r, @file).should be_true
  end
    
          it 'autocorrects closing brace on different line from last element' do
        new_source = autocorrect_source(<<-RUBY.strip_indent.chomp)
          #{prefix}#{open}#{a}, # a
          #{b} # b
          #{close}
          #{suffix}
        RUBY
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode