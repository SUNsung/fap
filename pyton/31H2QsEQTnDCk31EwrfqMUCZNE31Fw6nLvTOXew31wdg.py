
        
        
class UndirectWeightedGraph:
    d = 0.85
    
    
def viterbi(obs, states, start_p, trans_p, emit_p):
    V = [{}]  # tabular
    mem_path = [{}]
    all_states = trans_p.keys()
    for y in states.get(obs[0], all_states):  # init
        V[0][y] = start_p[y] + emit_p[y].get(obs[0], MIN_FLOAT)
        mem_path[0][y] = ''
    for t in xrange(1, len(obs)):
        V.append({})
        mem_path.append({})
        #prev_states = get_top_states(V[t-1])
        prev_states = [
            x for x in mem_path[t - 1].keys() if len(trans_p[x]) > 0]
    
    if opt.withWeight is None:
    withWeight = False
else:
    if int(opt.withWeight) is 1:
        withWeight = True
    else:
        withWeight = False
    
    # Inverse the vectorizer vocabulary to be able
feature_names = count_vect.get_feature_names()