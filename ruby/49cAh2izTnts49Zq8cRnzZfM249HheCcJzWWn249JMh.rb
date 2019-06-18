
        
            private
    
      class TestSubHash < TestHash
    class SubHash < Hash
      def reject(*)
        super
      end
    end
    
        unless SCANNER_EVENT_TABLE.key?(:ignored_sp)
      SCANNER_EVENT_TABLE[:ignored_sp] = 1
      SCANNER_EVENTS << :ignored_sp
      EVENTS << :ignored_sp
    end
    
      def test_using_wrong_argument
    bug = '[ruby-dev:50270] [Bug #13956]'
    pattern = /expected Module/
    assert_separately([], '#{<<-'begin;'}\n#{<<-'end;'}')
    bug = ''#{bug.dump}
    pattern = /#{pattern}/
    begin;
      assert_raise_with_message(TypeError, pattern, bug) {
        using(1) do end
      }
    end;
    assert_separately([], '#{<<-'begin;'}\n#{<<-'end;'}')
    bug = ''#{bug.dump}
    pattern = /#{pattern}/
    begin;
      assert_raise_with_message(TypeError, pattern, bug) {
        Module.new {using(1) {}}
      }
    end;
  end
    
            gv = eval('global_variables', bind).collect{|m| m.to_s}
        lv = eval('local_variables', bind).collect{|m| m.to_s}
        iv = eval('instance_variables', bind).collect{|m| m.to_s}
        cv = eval('self.class.constants', bind).collect{|m| m.to_s}
    
          require 'rack'
      puts 'EXEC: \#{caller.grep(/load/).empty? ? 'exec' : 'load'}'
      puts 'ARGS: \#{$0} \#{ARGV.join(' ')}'
      puts 'RACK: \#{RACK}'
      process_title = `ps -o args -p \#{Process.pid}`.split('\n', 2).last.strip
      puts 'PROCESS: \#{process_title}'
    RUBY
    
    def r(val); *a = yield(); test_ok(a == val, 2); end
r([nil]){next}
r([nil]){next nil}
r([1]){next 1}
r([]){next []}
r([1]){next [1]}
r([nil]){next [nil]}
r([[]]){next [[]]}
r([1,2]){next [1,2]}
r([]){next [*[]]}
r([1]){next [*[1]]}
r([1,2]){next [*[1,2]]}
    
        config.cache_store = :memory_store
    config.public_file_server.headers = {
      'Cache-Control' => 'public, max-age=#{2.days.to_i}'
    }
  else
    config.action_controller.perform_caching = false
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
        it 'accepts jsfiddle link' do
      liquid = generate_new_liquid(jsfiddle_link)
      rendered_jsfiddle_iframe = liquid.render
      Approvals.verify(rendered_jsfiddle_iframe, name: 'jsfiddle_liquid_tag', format: :html)
    end
    
      def user_is_author?
    record.user_id == user.id
  end
end
