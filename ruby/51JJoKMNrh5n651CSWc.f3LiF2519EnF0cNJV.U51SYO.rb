
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
            def handle_websockets_event(websocket)
          websocket.onopen { |handshake| connect(websocket, handshake) }
          websocket.onclose { disconnect(websocket) }
          websocket.onmessage { |msg| print_message(msg) }
          websocket.onerror { |error| log_error(error) }
        end
    
          def parse_expression(str)
        Liquid::Variable.new(str, Liquid::ParseContext.new)
      end
    
    def to_integer(proc)
  proc[-> n { n + 1 }][0]
end
    
    $pnum=[]
def setpiece(a,pos)
  if a.length == $p.length then
    $no += 1
    pboard
    return
  end
  while $b[pos] != -1
    pos += 1
  end
  ($pnum - a).each do |i|
    $p[i].each do |x|
      f = 0
      x.each{|s|
        if $b[pos+s] != -1
          f=1
          break
        end
      }
      if f == 0 then
        x.each{|s|
          $b[pos+s] = i
        }
        a << i
        setpiece(a.dup, pos)
        a.pop
        x.each{|s|
          $b[pos+s] = -1
        }
      end
    end
  end
end