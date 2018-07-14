
        
                def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
            dot_notation.each_key do |key|
          table_name, column_name = key.split('.'.freeze)
          value = attributes.delete(key)
          attributes[table_name] ||= {}
    
        Pirate.create!(parrot_ids: [parrot.id], catchphrase: 'Arrrr')
    assert_equal 0, parrot.reload.updated_count
  end
    
      before_destroy :overwrite_to_raise
    
      test 'disallow unknown args' do
    [ 'send_updates', Object.new, nil ].each do |invalid|
      e = assert_raise ArgumentError do
        ChatChannel.periodically invalid, every: 1
      end
      assert_match(/Expected a Symbol/, e.message)
    end
  end
    
          assert_not_called(@connection.websocket, :close) do
        @connection.process_internal_message 'type' => 'unknown'
      end
    end
  end
    
        def subscribed
      @room = Room.new params[:id]
      @lines = []
    end
    
      test '#restart shuts down pub/sub adapter' do
    assert_called(@server.pubsub, :shutdown) do
      @server.restart
    end
  end
end

    
      def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
        # Required
    #  Put your agent logic in here, it must not return. If it does your agent will be restarted.
    def run; end
    
      def import
    if params[:file]
      file = params[:file]
      content = JSON.parse(file.read)
      new_credentials = content.map do |hash|
        current_user.user_credentials.build(hash.slice('credential_name', 'credential_value', 'mode'))
      end
    
    def prelude(f, out)
  @exprs = {}
  lex_state_def = false
  while line = f.gets
    case line
    when /\A%%/
      out << '%%' << $/
      return
    when /\A%token/
      out << line.sub(/<\w+>/, '<val>')
    when /\A%type/
      out << line.sub(/<\w+>/, '<val>')
    when /^enum lex_state_(?:bits|e) \{/
      lex_state_def = true
      out << line
    when /^\}/
      lex_state_def = false
      out << line
    else
      out << line
    end
    if lex_state_def
      case line
      when /^\s*(EXPR_\w+),\s+\/\*(.+)\*\//
        @exprs[$1.chomp('_bit')] = $2.strip
      when /^\s*(EXPR_\w+)\s+=\s+(.+)$/
        name = $1
        val = $2.chomp(',')
        @exprs[name] = 'equals to ' + (val.start_with?('(') ? '<tt>#{val}</tt>' : '+#{val}+')
      end
    end
  end
end
    
      it 'evaluates body if expression is true' do
    a = []
    if true
      a << 123
    end
    a.should == [123]
  end
    
      before :all do
    begin
      leaked = Process.waitall
      puts 'leaked before wait specs: #{leaked}' unless leaked.empty?
      with_feature :mjit do
        # Ruby-space should not see PIDs used by mjit
        leaked.should be_empty
      end
    rescue NotImplementedError
    end
  end
    
    #
# SortedSet implements a Set that guarantees that its elements are
# yielded in sorted order (according to the return values of their
# #<=> methods) when iterating over them.
#
# All elements that are added to a SortedSet must respond to the <=>
# method for comparison.
#
# Also, all elements must be <em>mutually comparable</em>: <tt>el1 <=>
# el2</tt> must not return <tt>nil</tt> for any elements <tt>el1</tt>
# and <tt>el2</tt>, else an ArgumentError will be raised when
# iterating over the SortedSet.
#
# == Example
#
#   require 'set'
#
#   set = SortedSet.new([2, 1, 5, 6, 4, 5, 3, 3, 3])
#   ary = []
#
#   set.each do |obj|
#     ary << obj
#   end
#
#   p ary # => [1, 2, 3, 4, 5, 6]
#
#   set2 = SortedSet.new([1, 2, '3'])
#   set2.each { |obj| } # => raises ArgumentError: comparison of Fixnum with String failed
#
class SortedSet < Set
  @@setup = false
  @@mutex = Mutex.new
    
      def test_eq
    set1 = Set[2,3,1]
    set2 = Set[1,2,3]
    
      def type
    'Emoji'
  end
    
            expect_updated_sign_in_at(user)
        expect(Redis.current.zcard(FeedManager.instance.key(:home, user.account_id))).to eq 3
        expect(Redis.current.get('account:#{user.account_id}:regeneration')).to be_nil
      end
    end