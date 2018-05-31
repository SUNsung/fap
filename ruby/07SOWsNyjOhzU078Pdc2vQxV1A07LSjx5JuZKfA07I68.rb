
        
              message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
    # puts '\nDone.'

    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
        expect(get('/..', :foo => '<bar>')).to be_ok
  end
    
    module RuboCop
  module Cop
    class VariableForce
      # A Variable represents existence of a local variable.
      # This holds a variable declaration node,
      # and some states of the variable.
      class Variable
        VARIABLE_DECLARATION_TYPES =
          (VARIABLE_ASSIGNMENT_TYPES + ARGUMENT_DECLARATION_TYPES).freeze
    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'
    
            def_node_matcher :simple_double_comparison?, '(send $lvar :== $lvar)'
        def_node_matcher :simple_comparison?, <<-PATTERN
          {(send $lvar :== _)
           (send _ :== $lvar)}
        PATTERN
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
        expect(cop.offenses.size).to eq(1)
    expect(cop.messages).to eq(['Prefer `to_sym` over `intern`.'])
    expect(cop.highlights).to eq(%w[intern])